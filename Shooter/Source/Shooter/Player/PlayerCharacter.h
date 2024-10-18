
#pragma once
class AMyEnemy; // Forward declaration
//class UAIPerceptionStimulusSourceComponent;



#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Components/SphereComponent.h"
#include "Animation/SkeletalMeshActor.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"
#include "Potion.h"
#include "Projectile.h"
#include <memory>
#include <unordered_map>
#include <bitset>
#include <array>
#include "PlayerCharacter.generated.h"



//class AMyEnemy;


constexpr int MAX_COMPONENTS = 32;  // Adjust as needed
constexpr int MAX_ENTITIES = 1000;
// Components
USTRUCT()
struct FMyPositionComponent {
	GENERATED_BODY()
		FVector Position;
};


USTRUCT()
struct FMyHealthComponent {
	GENERATED_BODY()
		float CurrentHealth;
	float MaxHealth;
};

USTRUCT()
struct FMyPotionComponent {
	GENERATED_BODY()
		int PotionCount;
};

USTRUCT()
struct FMyInputComponent {
	GENERATED_BODY()
		FVector2D MovementInput;
	FVector2D LookInput;
	bool JumpRequested = false;
};


USTRUCT()
struct FMyDamageableComponent {
	GENERATED_BODY()
		bool CanReceiveDamage = true;
};

USTRUCT()
struct FMyEnemyTagComponent {
	GENERATED_BODY()
		// This is just a tag to identify enemy entities
};





class EntityManager {
public:
	using Entity = std::uint32_t;
	using ComponentMask = std::bitset<MAX_COMPONENTS>;



	void DestroyEnemy(Entity entity, UWorld* worldContext);

	Entity CreateEntity() {
		return m_EntityCounter++;
	}

	template<typename T>
	void AddComponent(Entity entity, T component) {
		GetComponentArray<T>()[entity] = component;
		m_EntityMasks[entity].set(GetComponentType<T>());
	}

	template<typename T>
	T* GetComponent(Entity entity) {
		return &GetComponentArray<T>()[entity];
	}

	template<typename T>
	bool HasComponent(Entity entity) {
		return m_EntityMasks[entity].test(GetComponentType<T>());
	}

	template<typename... Components>
	std::vector<Entity> GetEntitiesWithComponents() {
		ComponentMask mask;
		(mask.set(GetComponentType<Components>()), ...);

		std::vector<Entity> matchingEntities;
		for (Entity entity = 0; entity < m_EntityCounter; ++entity) {
			if ((m_EntityMasks[entity] & mask) == mask) {
				matchingEntities.push_back(entity);
			}
		}
		return matchingEntities;
	}

	FMyInputComponent* GetInput(Entity entity) {
		return GetComponent<FMyInputComponent>(entity);
	}

	FMyPositionComponent* GetPosition(Entity entity) {
		return GetComponent<FMyPositionComponent>(entity);
	}





private:
	Entity m_EntityCounter = 0;
	std::array<ComponentMask, MAX_ENTITIES> m_EntityMasks;

	template<typename T>
	static std::array<T, MAX_ENTITIES>& GetComponentArray() {
		static std::array<T, MAX_ENTITIES> componentArray;
		return componentArray;
	}

	template<typename T>
	static std::uint8_t GetComponentType() {
		static std::uint8_t type = s_ComponentCounter++;
		return type;
	}



	static inline std::uint8_t s_ComponentCounter = 0;
};

class MovementSystem {
public:
	void Update(EntityManager& entityManager, float deltaTime) {
		auto entities = entityManager.GetEntitiesWithComponents<FMyPositionComponent, FMyInputComponent>();
		for (auto entity : entities) {
			auto position = entityManager.GetComponent<FMyPositionComponent>(entity);
			auto input = entityManager.GetComponent<FMyInputComponent>(entity);

			position->Position += FVector(input->MovementInput.X, input->MovementInput.Y, 0) * deltaTime;
		}
	}
};

class DamageSystem
{
public:
	void Update(EntityManager& entityManager, UWorld* worldContext)
	{
		auto entities = entityManager.GetEntitiesWithComponents<FMyHealthComponent, FMyDamageableComponent>();

		for (auto entity : entities)
		{
			auto healthComp = entityManager.GetComponent<FMyHealthComponent>(entity);
			auto damageableComp = entityManager.GetComponent<FMyDamageableComponent>(entity);

			if (healthComp->CurrentHealth <= 0 && damageableComp->CanReceiveDamage)
			{
				// Entity is destroyed
				damageableComp->CanReceiveDamage = false;

				// If this is an enemy, we need to destroy the Unreal Actor
				if (entityManager.HasComponent<FMyEnemyTagComponent>(entity))
				{
					// Call DestroyEnemy with the world context
					entityManager.DestroyEnemy(entity, worldContext);
				}
			}
		}
	}


	static void ApplyDamage(EntityManager& entityManager, EntityManager::Entity target, float damageAmount, UWorld* worldContext)
	{
		if (entityManager.HasComponent<FMyHealthComponent>(target)) // Check if the entity has health component
		{
			auto healthComp = entityManager.GetComponent<FMyHealthComponent>(target); // Get the health component
			if (healthComp)
			{
				healthComp->CurrentHealth -= damageAmount; // Apply damage to health

				// Check if the enemy is dead and handle destruction
				if (healthComp->CurrentHealth <= 0)
				{
					// Handle destruction logic
					if (entityManager.HasComponent<FMyEnemyTagComponent>(target)) // Check if it is an enemy
					{
						// Call DestroyEnemy and pass the world context
						entityManager.DestroyEnemy(target, worldContext);
					}
				}
			}
		}
	}



};

// PlayerCharacter
UCLASS()
class SHOOTER_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();
	EntityManager::Entity GetPlayerEntity() const { return playerEntity; }

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* FireAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* SpawnAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UCameraComponent* Camera;

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void SpawnEnemy(FVector SpawnLocation);

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
		TSubclassOf<AMyEnemy> EnemyClass;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Fire(const FInputActionValue& Value);
	void DebugSpawnEnemy(const FInputActionValue& Value);




public:
	virtual void Tick(float DeltaTime) override;
	class UAIPerceptionStimuliSourceComponent* StimulusSource;
	void SetupStimulusSource();
	void TakeDamage(float damageAmount);
private:
	void Interact();
	

	std::unique_ptr<EntityManager> entityManager;
	EntityManager::Entity playerEntity; // Declare playerEntity
	std::unique_ptr<MovementSystem> movementSystem;
	std::unique_ptr<DamageSystem> damageSystem;

	UPROPERTY(EditAnywhere, Category = "Pickup", meta = (AllowPrivateAccess = true))
		USphereComponent* CollectionRange;

	UPROPERTY(EditAnywhere, Category = "Pickup")
		ASkeletalMeshActor* Inventory;

	UPROPERTY(EditAnywhere, Category = "Combat")
		FVector FireOffset;  // Offset from character location for projectile spawn

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<class AProjectile> ProjectileClass;


};






//class DamageSystem
//{
//public:
//	// Update the system: checks enemies and applies damage, updates player health if in range
//	void Update(EntityManager& entityManager, EntityManager::Entity playerEntity, UWorld* worldContext)
//	{
//		// Process all entities with health and damageable components
//		auto entities = entityManager.GetEntitiesWithComponents<FMyHealthComponent, FMyDamageableComponent>();
//
//		for (auto entity : entities)
//		{
//			auto healthComp = entityManager.GetComponent<FMyHealthComponent>(entity);
//			auto damageableComp = entityManager.GetComponent<FMyDamageableComponent>(entity);
//
//			// Check if the entity should be destroyed
//			if (healthComp->CurrentHealth <= 0 && damageableComp->CanReceiveDamage)
//			{
//				// Mark entity as non-damageable
//				damageableComp->CanReceiveDamage = false;
//
//				// Destroy entity if it's an enemy
//				if (entityManager.HasComponent<FMyEnemyTagComponent>(entity))
//				{
//					entityManager.DestroyEnemy(entity, worldContext);
//				}
//			}
//		}
//
//		// Apply damage to the player if conditions are met
//		ApplyDamageToPlayer(entityManager, playerEntity, worldContext);
//	}
//
//	// Apply damage to the player if enemies are in range
//	void ApplyDamageToPlayer(EntityManager& entityManager, EntityManager::Entity playerEntity, UWorld* worldContext)
//	{
//		// Get the player health component
//		auto playerHealthComp = entityManager.GetComponent<FMyHealthComponent>(playerEntity);
//
//		// If the player is dead or invalid, return early
//		if (!playerHealthComp || playerHealthComp->CurrentHealth <= 0)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("you died"));
//			return;
//		}
//
//		// Get all entities that have a position and are marked as enemies
//		auto enemies = entityManager.GetEntitiesWithComponents<FMyPositionComponent, FMyEnemyTagComponent>();
//
//		// Loop through all enemies and check if they are close enough to damage the player
//		for (auto enemy : enemies)
//		{
//			auto enemyPosition = entityManager.GetComponent<FMyPositionComponent>(enemy);
//			FVector enemyLoc = enemyPosition->Position;
//			FVector playerLoc = entityManager.GetComponent<FMyPositionComponent>(playerEntity)->Position;
//
//			// Calculate the distance between the enemy and the player
//			float distance = FVector::Dist(enemyLoc, playerLoc);
//
//			// If the enemy is within attack range, apply damage to the player
//			if (distance < AttackRange)
//			{
//				float damageAmount = 10.f;  // You can set this damage value as needed
//				ApplyDamage(entityManager, playerEntity, damageAmount, worldContext);
//			}
//		}
//	}
//
//	// Apply damage to a target entity, e.g., the player or an enemy
//	static void ApplyDamage(EntityManager& entityManager, EntityManager::Entity target, float damageAmount, UWorld* worldContext)
//	{
//		if (entityManager.HasComponent<FMyHealthComponent>(target))
//		{
//			auto healthComp = entityManager.GetComponent<FMyHealthComponent>(target);
//
//			if (healthComp)
//			{
//				// Apply damage to the entity's health
//				healthComp->CurrentHealth -= damageAmount;
//
//				// If the entity's health drops to 0 or below, handle destruction
//				if (healthComp->CurrentHealth <= 0)
//				{
//					// If the target is an enemy, destroy it
//					if (entityManager.HasComponent<FMyEnemyTagComponent>(target))
//					{
//						entityManager.DestroyEnemy(target, worldContext);
//					}
//				}
//			}
//		}
//	}
//
//private:
//	float AttackRange = 200.f;  // Define the range within which enemies can attack the player
//};
