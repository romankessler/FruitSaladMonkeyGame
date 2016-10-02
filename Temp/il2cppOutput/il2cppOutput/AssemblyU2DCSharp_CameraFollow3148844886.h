#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t2212926951;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t3148844886  : public MonoBehaviour_t667441552
{
public:
	// System.Single CameraFollow::_xMin
	float ____xMin_2;
	// System.Single CameraFollow::_xMax
	float ____xMax_3;
	// System.Single CameraFollow::_yMin
	float ____yMin_4;
	// System.Single CameraFollow::_yMax
	float ____yMax_5;
	// System.Single CameraFollow::_lastYVelocity
	float ____lastYVelocity_6;
	// System.Single CameraFollow::_lastXVelocity
	float ____lastXVelocity_7;
	// UnityEngine.GameObject CameraFollow::_cameraTarget
	GameObject_t3674682005 * ____cameraTarget_8;
	// UnityEngine.Transform CameraFollow::_target
	Transform_t1659122786 * ____target_9;
	// UnityEngine.Rigidbody2D CameraFollow::_targetRigidBody
	Rigidbody2D_t1743771669 * ____targetRigidBody_10;
	// UnityEngine.BoxCollider2D CameraFollow::_cameraArea
	BoxCollider2D_t2212926951 * ____cameraArea_11;
	// UnityEngine.GameObject CameraFollow::_cameraAreaObject
	GameObject_t3674682005 * ____cameraAreaObject_12;
	// UnityEngine.Camera CameraFollow::_camera
	Camera_t2727095145 * ____camera_13;

public:
	inline static int32_t get_offset_of__xMin_2() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____xMin_2)); }
	inline float get__xMin_2() const { return ____xMin_2; }
	inline float* get_address_of__xMin_2() { return &____xMin_2; }
	inline void set__xMin_2(float value)
	{
		____xMin_2 = value;
	}

	inline static int32_t get_offset_of__xMax_3() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____xMax_3)); }
	inline float get__xMax_3() const { return ____xMax_3; }
	inline float* get_address_of__xMax_3() { return &____xMax_3; }
	inline void set__xMax_3(float value)
	{
		____xMax_3 = value;
	}

	inline static int32_t get_offset_of__yMin_4() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____yMin_4)); }
	inline float get__yMin_4() const { return ____yMin_4; }
	inline float* get_address_of__yMin_4() { return &____yMin_4; }
	inline void set__yMin_4(float value)
	{
		____yMin_4 = value;
	}

	inline static int32_t get_offset_of__yMax_5() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____yMax_5)); }
	inline float get__yMax_5() const { return ____yMax_5; }
	inline float* get_address_of__yMax_5() { return &____yMax_5; }
	inline void set__yMax_5(float value)
	{
		____yMax_5 = value;
	}

	inline static int32_t get_offset_of__lastYVelocity_6() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____lastYVelocity_6)); }
	inline float get__lastYVelocity_6() const { return ____lastYVelocity_6; }
	inline float* get_address_of__lastYVelocity_6() { return &____lastYVelocity_6; }
	inline void set__lastYVelocity_6(float value)
	{
		____lastYVelocity_6 = value;
	}

	inline static int32_t get_offset_of__lastXVelocity_7() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____lastXVelocity_7)); }
	inline float get__lastXVelocity_7() const { return ____lastXVelocity_7; }
	inline float* get_address_of__lastXVelocity_7() { return &____lastXVelocity_7; }
	inline void set__lastXVelocity_7(float value)
	{
		____lastXVelocity_7 = value;
	}

	inline static int32_t get_offset_of__cameraTarget_8() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____cameraTarget_8)); }
	inline GameObject_t3674682005 * get__cameraTarget_8() const { return ____cameraTarget_8; }
	inline GameObject_t3674682005 ** get_address_of__cameraTarget_8() { return &____cameraTarget_8; }
	inline void set__cameraTarget_8(GameObject_t3674682005 * value)
	{
		____cameraTarget_8 = value;
		Il2CppCodeGenWriteBarrier(&____cameraTarget_8, value);
	}

	inline static int32_t get_offset_of__target_9() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____target_9)); }
	inline Transform_t1659122786 * get__target_9() const { return ____target_9; }
	inline Transform_t1659122786 ** get_address_of__target_9() { return &____target_9; }
	inline void set__target_9(Transform_t1659122786 * value)
	{
		____target_9 = value;
		Il2CppCodeGenWriteBarrier(&____target_9, value);
	}

	inline static int32_t get_offset_of__targetRigidBody_10() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____targetRigidBody_10)); }
	inline Rigidbody2D_t1743771669 * get__targetRigidBody_10() const { return ____targetRigidBody_10; }
	inline Rigidbody2D_t1743771669 ** get_address_of__targetRigidBody_10() { return &____targetRigidBody_10; }
	inline void set__targetRigidBody_10(Rigidbody2D_t1743771669 * value)
	{
		____targetRigidBody_10 = value;
		Il2CppCodeGenWriteBarrier(&____targetRigidBody_10, value);
	}

	inline static int32_t get_offset_of__cameraArea_11() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____cameraArea_11)); }
	inline BoxCollider2D_t2212926951 * get__cameraArea_11() const { return ____cameraArea_11; }
	inline BoxCollider2D_t2212926951 ** get_address_of__cameraArea_11() { return &____cameraArea_11; }
	inline void set__cameraArea_11(BoxCollider2D_t2212926951 * value)
	{
		____cameraArea_11 = value;
		Il2CppCodeGenWriteBarrier(&____cameraArea_11, value);
	}

	inline static int32_t get_offset_of__cameraAreaObject_12() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____cameraAreaObject_12)); }
	inline GameObject_t3674682005 * get__cameraAreaObject_12() const { return ____cameraAreaObject_12; }
	inline GameObject_t3674682005 ** get_address_of__cameraAreaObject_12() { return &____cameraAreaObject_12; }
	inline void set__cameraAreaObject_12(GameObject_t3674682005 * value)
	{
		____cameraAreaObject_12 = value;
		Il2CppCodeGenWriteBarrier(&____cameraAreaObject_12, value);
	}

	inline static int32_t get_offset_of__camera_13() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ____camera_13)); }
	inline Camera_t2727095145 * get__camera_13() const { return ____camera_13; }
	inline Camera_t2727095145 ** get_address_of__camera_13() { return &____camera_13; }
	inline void set__camera_13(Camera_t2727095145 * value)
	{
		____camera_13 = value;
		Il2CppCodeGenWriteBarrier(&____camera_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
