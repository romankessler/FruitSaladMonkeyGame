#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// PlayerController
struct PlayerController_t2866526589;
// HeartSystem
struct HeartSystem_t1045703157;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthController
struct  HealthController_t2938061624  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator HealthController::_animator
	Animator_t2776330603 * ____animator_2;
	// System.Single HealthController::_health
	float ____health_3;
	// System.Boolean HealthController::_isDamageable
	bool ____isDamageable_4;
	// System.Boolean HealthController::_isDead
	bool ____isDead_5;
	// System.Int32 HealthController::_lifePoints
	int32_t ____lifePoints_6;
	// PlayerController HealthController::_playerController
	PlayerController_t2866526589 * ____playerController_7;
	// HeartSystem HealthController::_heartSystem
	HeartSystem_t1045703157 * ____heartSystem_8;
	// System.Int32 HealthController::StartLifePoints
	int32_t ___StartLifePoints_9;
	// System.Int32 HealthController::MaxHeartAmount
	int32_t ___MaxHeartAmount_10;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____animator_2)); }
	inline Animator_t2776330603 * get__animator_2() const { return ____animator_2; }
	inline Animator_t2776330603 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t2776330603 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}

	inline static int32_t get_offset_of__health_3() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____health_3)); }
	inline float get__health_3() const { return ____health_3; }
	inline float* get_address_of__health_3() { return &____health_3; }
	inline void set__health_3(float value)
	{
		____health_3 = value;
	}

	inline static int32_t get_offset_of__isDamageable_4() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____isDamageable_4)); }
	inline bool get__isDamageable_4() const { return ____isDamageable_4; }
	inline bool* get_address_of__isDamageable_4() { return &____isDamageable_4; }
	inline void set__isDamageable_4(bool value)
	{
		____isDamageable_4 = value;
	}

	inline static int32_t get_offset_of__isDead_5() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____isDead_5)); }
	inline bool get__isDead_5() const { return ____isDead_5; }
	inline bool* get_address_of__isDead_5() { return &____isDead_5; }
	inline void set__isDead_5(bool value)
	{
		____isDead_5 = value;
	}

	inline static int32_t get_offset_of__lifePoints_6() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____lifePoints_6)); }
	inline int32_t get__lifePoints_6() const { return ____lifePoints_6; }
	inline int32_t* get_address_of__lifePoints_6() { return &____lifePoints_6; }
	inline void set__lifePoints_6(int32_t value)
	{
		____lifePoints_6 = value;
	}

	inline static int32_t get_offset_of__playerController_7() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____playerController_7)); }
	inline PlayerController_t2866526589 * get__playerController_7() const { return ____playerController_7; }
	inline PlayerController_t2866526589 ** get_address_of__playerController_7() { return &____playerController_7; }
	inline void set__playerController_7(PlayerController_t2866526589 * value)
	{
		____playerController_7 = value;
		Il2CppCodeGenWriteBarrier(&____playerController_7, value);
	}

	inline static int32_t get_offset_of__heartSystem_8() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ____heartSystem_8)); }
	inline HeartSystem_t1045703157 * get__heartSystem_8() const { return ____heartSystem_8; }
	inline HeartSystem_t1045703157 ** get_address_of__heartSystem_8() { return &____heartSystem_8; }
	inline void set__heartSystem_8(HeartSystem_t1045703157 * value)
	{
		____heartSystem_8 = value;
		Il2CppCodeGenWriteBarrier(&____heartSystem_8, value);
	}

	inline static int32_t get_offset_of_StartLifePoints_9() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ___StartLifePoints_9)); }
	inline int32_t get_StartLifePoints_9() const { return ___StartLifePoints_9; }
	inline int32_t* get_address_of_StartLifePoints_9() { return &___StartLifePoints_9; }
	inline void set_StartLifePoints_9(int32_t value)
	{
		___StartLifePoints_9 = value;
	}

	inline static int32_t get_offset_of_MaxHeartAmount_10() { return static_cast<int32_t>(offsetof(HealthController_t2938061624, ___MaxHeartAmount_10)); }
	inline int32_t get_MaxHeartAmount_10() const { return ___MaxHeartAmount_10; }
	inline int32_t* get_address_of_MaxHeartAmount_10() { return &___MaxHeartAmount_10; }
	inline void set_MaxHeartAmount_10(int32_t value)
	{
		___MaxHeartAmount_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
