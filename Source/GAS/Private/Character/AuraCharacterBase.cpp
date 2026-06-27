// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacterBase.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "Player/AuraPlayerState.h"

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	// 如果成员变量已有值（已在 InitAbilityActorInfo 中从 PlayerState 赋值过），直接返回
	if (AbilitySystemComponent)
	{
		return AbilitySystemComponent;
	}

	// 回退：ASC 存储在 PlayerState 上，但成员变量尚未被赋值（AnimBP 初始化早于 PossessedBy 时）
	// 直接从 PlayerState 获取 ASC，确保 AnimBP 等早期调用者也能正常工作
	if (const AAuraPlayerState* AuraPlayerState = GetPlayerState<AAuraPlayerState>())
	{
		return AuraPlayerState->GetAbilitySystemComponent();
	}

	return nullptr;
}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();

}

FVector AAuraCharacterBase::GetCombatSocketLocation()
{
	return Weapon->GetSocketLocation(WeaponTipSocketName);
}

void AAuraCharacterBase::InitAbilityActorInfo()
{
	//Implemented in child classes
}

void AAuraCharacterBase::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float level) const
{
	if (GameplayEffectClass == nullptr)return;
	check(GetAbilitySystemComponent());
	FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponent()->MakeEffectContext();
	ContextHandle.AddSourceObject(this);
	const FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, level, ContextHandle);
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data, GetAbilitySystemComponent());
}

void AAuraCharacterBase::InitialDefaultAttributes() const
{
	ApplyEffectToSelf(DefaultPrimaryAttributes,1.f);
	ApplyEffectToSelf(DefaultSecondaryAttributes,1.f);
	ApplyEffectToSelf(DefaultVitalAttributes,1.f);
}

void AAuraCharacterBase::AddCharacterAbilities()
{
	if (!HasAuthority())return;
	UAuraAbilitySystemComponent* AuraASC = CastChecked<UAuraAbilitySystemComponent>(AbilitySystemComponent);
	AuraASC->AddCharacterAbilities(StartupAbilities);
}
