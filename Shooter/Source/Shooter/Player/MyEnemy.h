
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shooter/Player/PlayerCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "CombatInterface.h"
//Animation montage
#include "MyEnemy.generated.h"


class EntityManager;

UCLASS()
class SHOOTER_API AMyEnemy : public ACharacter, public ICombatInterface
{
    GENERATED_BODY()

public:
    AMyEnemy();
    virtual void Tick(float DeltaTime) override;


    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Health")
        float CurrentHealth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Health")
        float MaxHealth = 100.0f;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AI")
        UBehaviorTree* Tree;

    UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Animation")
        UAnimMontage* Montage;

    UBehaviorTree* GetBehaviorTree() const;
    UAnimMontage* GetMontage()const;

    EntityManager* entityManager;
    EntityManager::Entity enemyEntity;

    void InitializeECS(EntityManager* manager);
    void TakeDamage(float DamageAmount);
    int MeleeAttack_Implementation();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
    bool bIsDead = false;
    bool bIsBeingDestroyed = false;
    FTimerHandle DestructionTimerHandle;

    void InitiateDestruction();
    void FinalizeDestruction();
    void UpdateECSHealth();

    

    
};



