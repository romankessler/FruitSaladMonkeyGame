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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator PlayerController::_animator
	Animator_t2776330603 * ____animator_2;
	// System.Boolean PlayerController::IsGrounded
	bool ___IsGrounded_3;
	// System.Boolean PlayerController::_isJumping
	bool ____isJumping_4;
	// System.Single PlayerController::_jumpForce
	float ____jumpForce_5;
	// System.Boolean PlayerController::_lookingRight
	bool ____lookingRight_6;
	// System.Single PlayerController::_maxSpeed
	float ____maxSpeed_7;
	// UnityEngine.Rigidbody2D PlayerController::_rigidbody
	Rigidbody2D_t1743771669 * ____rigidbody_8;
	// UnityEngine.LayerMask PlayerController::_whatIsGround
	LayerMask_t3236759763  ____whatIsGround_9;
	// UnityEngine.Transform PlayerController::groundCheck
	Transform_t1659122786 * ___groundCheck_10;
	// UnityEngine.AudioClip PlayerController::JumpSoundEffect
	AudioClip_t794140988 * ___JumpSoundEffect_11;
	// UnityEngine.AudioClip PlayerController::LandedSoundEffect
	AudioClip_t794140988 * ___LandedSoundEffect_12;
	// System.Single PlayerController::<WalkingSpeed>k__BackingField
	float ___U3CWalkingSpeedU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____animator_2)); }
	inline Animator_t2776330603 * get__animator_2() const { return ____animator_2; }
	inline Animator_t2776330603 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t2776330603 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}

	inline static int32_t get_offset_of_IsGrounded_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___IsGrounded_3)); }
	inline bool get_IsGrounded_3() const { return ___IsGrounded_3; }
	inline bool* get_address_of_IsGrounded_3() { return &___IsGrounded_3; }
	inline void set_IsGrounded_3(bool value)
	{
		___IsGrounded_3 = value;
	}

	inline static int32_t get_offset_of__isJumping_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____isJumping_4)); }
	inline bool get__isJumping_4() const { return ____isJumping_4; }
	inline bool* get_address_of__isJumping_4() { return &____isJumping_4; }
	inline void set__isJumping_4(bool value)
	{
		____isJumping_4 = value;
	}

	inline static int32_t get_offset_of__jumpForce_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____jumpForce_5)); }
	inline float get__jumpForce_5() const { return ____jumpForce_5; }
	inline float* get_address_of__jumpForce_5() { return &____jumpForce_5; }
	inline void set__jumpForce_5(float value)
	{
		____jumpForce_5 = value;
	}

	inline static int32_t get_offset_of__lookingRight_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____lookingRight_6)); }
	inline bool get__lookingRight_6() const { return ____lookingRight_6; }
	inline bool* get_address_of__lookingRight_6() { return &____lookingRight_6; }
	inline void set__lookingRight_6(bool value)
	{
		____lookingRight_6 = value;
	}

	inline static int32_t get_offset_of__maxSpeed_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____maxSpeed_7)); }
	inline float get__maxSpeed_7() const { return ____maxSpeed_7; }
	inline float* get_address_of__maxSpeed_7() { return &____maxSpeed_7; }
	inline void set__maxSpeed_7(float value)
	{
		____maxSpeed_7 = value;
	}

	inline static int32_t get_offset_of__rigidbody_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____rigidbody_8)); }
	inline Rigidbody2D_t1743771669 * get__rigidbody_8() const { return ____rigidbody_8; }
	inline Rigidbody2D_t1743771669 ** get_address_of__rigidbody_8() { return &____rigidbody_8; }
	inline void set__rigidbody_8(Rigidbody2D_t1743771669 * value)
	{
		____rigidbody_8 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_8, value);
	}

	inline static int32_t get_offset_of__whatIsGround_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____whatIsGround_9)); }
	inline LayerMask_t3236759763  get__whatIsGround_9() const { return ____whatIsGround_9; }
	inline LayerMask_t3236759763 * get_address_of__whatIsGround_9() { return &____whatIsGround_9; }
	inline void set__whatIsGround_9(LayerMask_t3236759763  value)
	{
		____whatIsGround_9 = value;
	}

	inline static int32_t get_offset_of_groundCheck_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___groundCheck_10)); }
	inline Transform_t1659122786 * get_groundCheck_10() const { return ___groundCheck_10; }
	inline Transform_t1659122786 ** get_address_of_groundCheck_10() { return &___groundCheck_10; }
	inline void set_groundCheck_10(Transform_t1659122786 * value)
	{
		___groundCheck_10 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_10, value);
	}

	inline static int32_t get_offset_of_JumpSoundEffect_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___JumpSoundEffect_11)); }
	inline AudioClip_t794140988 * get_JumpSoundEffect_11() const { return ___JumpSoundEffect_11; }
	inline AudioClip_t794140988 ** get_address_of_JumpSoundEffect_11() { return &___JumpSoundEffect_11; }
	inline void set_JumpSoundEffect_11(AudioClip_t794140988 * value)
	{
		___JumpSoundEffect_11 = value;
		Il2CppCodeGenWriteBarrier(&___JumpSoundEffect_11, value);
	}

	inline static int32_t get_offset_of_LandedSoundEffect_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___LandedSoundEffect_12)); }
	inline AudioClip_t794140988 * get_LandedSoundEffect_12() const { return ___LandedSoundEffect_12; }
	inline AudioClip_t794140988 ** get_address_of_LandedSoundEffect_12() { return &___LandedSoundEffect_12; }
	inline void set_LandedSoundEffect_12(AudioClip_t794140988 * value)
	{
		___LandedSoundEffect_12 = value;
		Il2CppCodeGenWriteBarrier(&___LandedSoundEffect_12, value);
	}

	inline static int32_t get_offset_of_U3CWalkingSpeedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___U3CWalkingSpeedU3Ek__BackingField_13)); }
	inline float get_U3CWalkingSpeedU3Ek__BackingField_13() const { return ___U3CWalkingSpeedU3Ek__BackingField_13; }
	inline float* get_address_of_U3CWalkingSpeedU3Ek__BackingField_13() { return &___U3CWalkingSpeedU3Ek__BackingField_13; }
	inline void set_U3CWalkingSpeedU3Ek__BackingField_13(float value)
	{
		___U3CWalkingSpeedU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
