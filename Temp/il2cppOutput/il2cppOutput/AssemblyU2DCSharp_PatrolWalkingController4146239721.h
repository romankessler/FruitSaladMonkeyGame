#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PatrolWalkingController
struct  PatrolWalkingController_t4146239721  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody2D PatrolWalkingController::_rigidbody
	Rigidbody2D_t1743771669 * ____rigidbody_2;
	// UnityEngine.Animator PatrolWalkingController::_animator
	Animator_t2776330603 * ____animator_3;
	// System.Single PatrolWalkingController::_walkingRange
	float ____walkingRange_4;
	// System.Single PatrolWalkingController::_maxWalkingSpeed
	float ____maxWalkingSpeed_5;
	// System.Single PatrolWalkingController::_walkingSpeed
	float ____walkingSpeed_6;
	// UnityEngine.Vector3 PatrolWalkingController::_minPosition
	Vector3_t4282066566  ____minPosition_7;
	// UnityEngine.Vector3 PatrolWalkingController::_maxPosition
	Vector3_t4282066566  ____maxPosition_8;

public:
	inline static int32_t get_offset_of__rigidbody_2() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____rigidbody_2)); }
	inline Rigidbody2D_t1743771669 * get__rigidbody_2() const { return ____rigidbody_2; }
	inline Rigidbody2D_t1743771669 ** get_address_of__rigidbody_2() { return &____rigidbody_2; }
	inline void set__rigidbody_2(Rigidbody2D_t1743771669 * value)
	{
		____rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_2, value);
	}

	inline static int32_t get_offset_of__animator_3() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____animator_3)); }
	inline Animator_t2776330603 * get__animator_3() const { return ____animator_3; }
	inline Animator_t2776330603 ** get_address_of__animator_3() { return &____animator_3; }
	inline void set__animator_3(Animator_t2776330603 * value)
	{
		____animator_3 = value;
		Il2CppCodeGenWriteBarrier(&____animator_3, value);
	}

	inline static int32_t get_offset_of__walkingRange_4() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____walkingRange_4)); }
	inline float get__walkingRange_4() const { return ____walkingRange_4; }
	inline float* get_address_of__walkingRange_4() { return &____walkingRange_4; }
	inline void set__walkingRange_4(float value)
	{
		____walkingRange_4 = value;
	}

	inline static int32_t get_offset_of__maxWalkingSpeed_5() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____maxWalkingSpeed_5)); }
	inline float get__maxWalkingSpeed_5() const { return ____maxWalkingSpeed_5; }
	inline float* get_address_of__maxWalkingSpeed_5() { return &____maxWalkingSpeed_5; }
	inline void set__maxWalkingSpeed_5(float value)
	{
		____maxWalkingSpeed_5 = value;
	}

	inline static int32_t get_offset_of__walkingSpeed_6() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____walkingSpeed_6)); }
	inline float get__walkingSpeed_6() const { return ____walkingSpeed_6; }
	inline float* get_address_of__walkingSpeed_6() { return &____walkingSpeed_6; }
	inline void set__walkingSpeed_6(float value)
	{
		____walkingSpeed_6 = value;
	}

	inline static int32_t get_offset_of__minPosition_7() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____minPosition_7)); }
	inline Vector3_t4282066566  get__minPosition_7() const { return ____minPosition_7; }
	inline Vector3_t4282066566 * get_address_of__minPosition_7() { return &____minPosition_7; }
	inline void set__minPosition_7(Vector3_t4282066566  value)
	{
		____minPosition_7 = value;
	}

	inline static int32_t get_offset_of__maxPosition_8() { return static_cast<int32_t>(offsetof(PatrolWalkingController_t4146239721, ____maxPosition_8)); }
	inline Vector3_t4282066566  get__maxPosition_8() const { return ____maxPosition_8; }
	inline Vector3_t4282066566 * get_address_of__maxPosition_8() { return &____maxPosition_8; }
	inline void set__maxPosition_8(Vector3_t4282066566  value)
	{
		____maxPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
