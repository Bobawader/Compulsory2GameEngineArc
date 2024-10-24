
#pragma once
class AMyEnemy; // Forward declaration




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




constexpr int MAX_COMPONENTS = 32;  
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
	bool bIsDead = false;

	std::unique_ptr<EntityManager> entityManager;
	EntityManager::Entity playerEntity; // Declare playerEntity
	std::unique_ptr<MovementSystem> movementSystem;
	std::unique_ptr<DamageSystem> damageSystem;

	UPROPERTY(EditAnywhere, Category = "Pickup", meta = (AllowPrivateAccess = true))
		USphereComponent* CollectionRange;

	UPROPERTY(EditAnywhere, Category = "Pickup")
		ASkeletalMeshActor* Inventory;

	UPROPERTY(EditAnywhere, Category = "Combat")
		FVector FireOffset;  

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<class AProjectile> ProjectileClass;


};






