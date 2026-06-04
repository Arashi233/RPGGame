// Fill out your copyright notice in the Description page of Project Settings.
//
// 已添加注释，解释每个函数的用途、网络/GE 相关注意事项以及一些可能的陷阱（例如 Props 按值传递）。
//

#include "AbilitySystem/AuraAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemBlueprintLibrary.h"

/*
 * 构造函数
 * - 在这里初始化属性的默认值（仅影响本地对象的初始值）
 * - 推荐在多人/网络场景中通过 GameplayEffect (GE) 来设置角色的初始属性，
 *   因为 GE 的应用会统一在服务器上执行并通过属性复制同步到客户端。
 */
UAuraAttributeSet::UAuraAttributeSet()
{
	// 初始化默认值（仅本地默认）
	// 注意：在网络游戏中，客户端在对应的属性 Replicate 到来之前可能会看到 0，
	// 因此务必在服务器上尽早使用 GE 应用这些初始值，或者在客户端等待 RepNotify 后再显示 UI。
	//InitHealth(50.f);
	//InitMana(50.f);
}


/*
 * 将 GameplayEffect 回调数据封装到 FEffectProperties 中供后续使用。
 *
 * 参数说明：
 * - Data: GE 回调提供的上下文、被评估的数据与目标 ASC 引用。
 * - Props: 这里以值传递（按值）传入并在函数内部被赋值（注意：按值传递不会改变调用者的副本）。
 *   如果期望将结果返回给调用者，应改为传引用（FEffectProperties&）。
 *
 * 作用：
 * - 从 EffectSpecContext 获取 Source 的 AbilitySystemComponent、Avatar Actor、Controller 等信息。
 * - 从 Data.Target 获取 Target 的 Avatar 和 Controller 信息。
 *
 * 注意事项：
 * - 请检查 Props 按值传递是否是你的本意；当前实现修改的是本地副本，调用者不会看到修改结果。
 */
void UAuraAttributeSet::SetFEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props)const
{
	// 从 EffectSpec 中获取 EffectContext（来源等）
	Props.EffectContextHandle = Data.EffectSpec.GetContext();
	// 获取发起者的 AbilitySystemComponent（如果有）
	Props.SourceASC = Props.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if (IsValid(Props.SourceASC)) {
		// 尝试获取发起者 Avatar Actor 与 Controller（优先从 AbilitySystemComponent 提供的 AbilityActorInfo）
		Props.SourceAvatarActor = Props.SourceASC->GetAvatarActor();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();

		// 如果没有从 AbilityActorInfo 获取到 Controller，尝试从 Avatar Actor 推断（适用于 AI / Pawn 场景）
		if (Props.SourceController == nullptr && Props.SourceAvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController<APlayerController>();
			}
		}

		// 如果有 Controller，可以继续获取它的 Pawn/Character（此处仅演示获取方式）
		if (Props.SourceController) {
			ACharacter* SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());
			// 这里可以将 SourceCharacter 存入 Props（若 Props 是引用）
		}
	}

	// 处理目标信息（Target 通常总是本地的 AbilitySystemComponent 的封装）
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid()) {
		Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);

		// 注意：Data.Target 是一个 UAbilitySystemComponent 的引用封装（这里直接将其地址存入 Props）
		// 如果需要 UAbilitySystemComponent*，应使用 AbilitySystemBlueprintLibrary 或直接从 AbilityActorInfo 获取
		//Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetAvatarActor);
		Props.TargetASC = &Data.Target;
	}
}


/*
 * 属性复制配置
 * - 将需要通过网络复制的属性注册到 Replication 系统
 * - 使用 DOREPLIFETIME_CONDITION_NOTIFY 可以在属性复制时触发 OnRep 通知
 */
void UAuraAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 注册属性复制并始终触发 RepNotify（REPNOTIFY_Always），以便客户端能收到值变化并触发回调
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Mana, COND_None, REPNOTIFY_Always);


	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Strength, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Resilience, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Intelligence, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Vigor, COND_None, REPNOTIFY_Always);
	
	/*
	 * 护甲，护甲穿透，格挡几率，暴击率，暴击伤害，暴击抗性，移动速度，生命恢复，法力回复，施法速度
	 */

	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, ArmorPenetration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, BlockChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, CritChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, CritDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, CritResistance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MoveSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, HealthRegen, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, ManaRegen, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, CastSpeed, COND_None, REPNOTIFY_Always);

}

/*
 * 在属性即将被更改之前进行拦截（客户端/服务器都会调用）
 * - 常用于动态调整或限制属性（例如：最大值限制、百分比缩放等）
 */
void UAuraAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// 当 Health 被修改时，确保新值在 [0, MaxHealth] 范围内
	if (Attribute == GetHealthAttribute()) {
		UE_LOG(LogTemp, Warning,
			TEXT("Health=%f MaxHealth=%f"),
			NewValue,
			GetMaxHealth());
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
	// 对 MaxHealth / MaxMana 的特殊处理可以在这里添加（例如确保最小值、当最大值变化时调整当前值等）
	else if(Attribute == GetMaxHealthAttribute()) {
		// 示例：确保 MaxHealth 至少为 1（可在此处做）
		NewValue = FMath::Max(NewValue, 1.f);
	}
	else if(Attribute == GetMaxManaAttribute()) {
		// 示例：对 MaxMana 做最小值限制
		NewValue = FMath::Max(NewValue, 1.f);
	}
	// 当 Mana 被修改时，确保新值在 [0, MaxMana] 范围内
	else if (Attribute == GetManaAttribute()) {
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxMana());
	}
}

/*
 * 当 GameplayEffect 执行完成后回调
 * - 在这里可以读取 EvaluatedData 并对 Attribute 做后处理（例如：对当前值做上限限制、触发副作用等）
 * - 注意：某些修改可能在服务器上生效并复制到客户端，确保不要在客户端重复执行会导致的不一致操作
 */
void UAuraAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	// 收集 Effect 的相关信息（若需要）
	FEffectProperties Props;
	SetFEffectProperties(Data, Props);	

	// 在这里可以根据 Data.EvaluatedData.Attribute 来分派不同的处理逻辑，
	// 但当前实现未在此处作额外处理；可扩展为应用伤害、治疗、触发事件等。
	if (Data.EvaluatedData.Attribute == GetHealthAttribute()) 
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute()) 
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
}

/*
 * 属性的 RepNotify 函数：
 * - 当属性通过网络复制到客户端时，GAMEPLAYATTRIBUTE_REPNOTIFY 宏会更新内部缓存并通知委托（例如：OnAttributeChanged）
 * - 推荐在属性变化时通过委托或事件将变更广播给 UI 层，以便客户端刷新显示
 */


 /*
  * Vital Attributes
  */

void UAuraAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldHealth);
}



void UAuraAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Mana, OldMana);
}

/*
 * Primary Attributes
 */

void UAuraAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Strength, OldStrength);
}

void UAuraAttributeSet::OnRep_Resilience(const FGameplayAttributeData& OldResilience) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Resilience, OldResilience);
}

void UAuraAttributeSet::OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Intelligence, OldIntelligence);
}

void UAuraAttributeSet::OnRep_Vigor(const FGameplayAttributeData& OldVigor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Vigor, OldVigor);
}

/*
 * Secondary Attributes
 */

void UAuraAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MaxHealth, OldMaxHealth);
}
void UAuraAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MaxMana, OldMaxMana);
}

void UAuraAttributeSet::OnRep_Armor(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Armor, OldValue);
}

void UAuraAttributeSet::OnRep_ArmorPenetration(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, ArmorPenetration, OldValue);
}

void UAuraAttributeSet::OnRep_BlockChance(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, BlockChance, OldValue);
}

void UAuraAttributeSet::OnRep_CritChance(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, CritChance, OldValue);
}

void UAuraAttributeSet::OnRep_CritDamage(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, CritDamage, OldValue);
}

void UAuraAttributeSet::OnRep_CritResistance(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, CritResistance, OldValue);
}

void UAuraAttributeSet::OnRep_MoveSpeed(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MoveSpeed, OldValue);
}

void UAuraAttributeSet::OnRep_HealthRegen(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, HealthRegen, OldValue);
}

void UAuraAttributeSet::OnRep_ManaRegen(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, ManaRegen, OldValue);
}

void UAuraAttributeSet::OnRep_CastSpeed(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, CastSpeed, OldValue);
}

