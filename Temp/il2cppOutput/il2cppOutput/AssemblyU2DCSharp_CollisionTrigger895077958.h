#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t2212926951;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionTrigger
struct  CollisionTrigger_t895077958  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.BoxCollider2D CollisionTrigger::_platformCollider
	BoxCollider2D_t2212926951 * ____platformCollider_2;
	// UnityEngine.BoxCollider2D CollisionTrigger::_platormTrigger
	BoxCollider2D_t2212926951 * ____platormTrigger_3;
	// UnityEngine.BoxCollider2D CollisionTrigger::_playerCollider
	BoxCollider2D_t2212926951 * ____playerCollider_4;
	// System.Boolean CollisionTrigger::_collissionActive
	bool ____collissionActive_5;

public:
	inline static int32_t get_offset_of__platformCollider_2() { return static_cast<int32_t>(offsetof(CollisionTrigger_t895077958, ____platformCollider_2)); }
	inline BoxCollider2D_t2212926951 * get__platformCollider_2() const { return ____platformCollider_2; }
	inline BoxCollider2D_t2212926951 ** get_address_of__platformCollider_2() { return &____platformCollider_2; }
	inline void set__platformCollider_2(BoxCollider2D_t2212926951 * value)
	{
		____platformCollider_2 = value;
		Il2CppCodeGenWriteBarrier(&____platformCollider_2, value);
	}

	inline static int32_t get_offset_of__platormTrigger_3() { return static_cast<int32_t>(offsetof(CollisionTrigger_t895077958, ____platormTrigger_3)); }
	inline BoxCollider2D_t2212926951 * get__platormTrigger_3() const { return ____platormTrigger_3; }
	inline BoxCollider2D_t2212926951 ** get_address_of__platormTrigger_3() { return &____platormTrigger_3; }
	inline void set__platormTrigger_3(BoxCollider2D_t2212926951 * value)
	{
		____platormTrigger_3 = value;
		Il2CppCodeGenWriteBarrier(&____platormTrigger_3, value);
	}

	inline static int32_t get_offset_of__playerCollider_4() { return static_cast<int32_t>(offsetof(CollisionTrigger_t895077958, ____playerCollider_4)); }
	inline BoxCollider2D_t2212926951 * get__playerCollider_4() const { return ____playerCollider_4; }
	inline BoxCollider2D_t2212926951 ** get_address_of__playerCollider_4() { return &____playerCollider_4; }
	inline void set__playerCollider_4(BoxCollider2D_t2212926951 * value)
	{
		____playerCollider_4 = value;
		Il2CppCodeGenWriteBarrier(&____playerCollider_4, value);
	}

	inline static int32_t get_offset_of__collissionActive_5() { return static_cast<int32_t>(offsetof(CollisionTrigger_t895077958, ____collissionActive_5)); }
	inline bool get__collissionActive_5() const { return ____collissionActive_5; }
	inline bool* get_address_of__collissionActive_5() { return &____collissionActive_5; }
	inline void set__collissionActive_5(bool value)
	{
		____collissionActive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
