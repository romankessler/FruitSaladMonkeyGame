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
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionDestroy
struct  CollisionDestroy_t3512342664  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.BoxCollider2D CollisionDestroy::_triggerArea
	BoxCollider2D_t2212926951 * ____triggerArea_2;
	// UnityEngine.AudioClip CollisionDestroy::_triggerSoundEffect
	AudioClip_t794140988 * ____triggerSoundEffect_3;
	// UnityEngine.Animator CollisionDestroy::_animator
	Animator_t2776330603 * ____animator_4;

public:
	inline static int32_t get_offset_of__triggerArea_2() { return static_cast<int32_t>(offsetof(CollisionDestroy_t3512342664, ____triggerArea_2)); }
	inline BoxCollider2D_t2212926951 * get__triggerArea_2() const { return ____triggerArea_2; }
	inline BoxCollider2D_t2212926951 ** get_address_of__triggerArea_2() { return &____triggerArea_2; }
	inline void set__triggerArea_2(BoxCollider2D_t2212926951 * value)
	{
		____triggerArea_2 = value;
		Il2CppCodeGenWriteBarrier(&____triggerArea_2, value);
	}

	inline static int32_t get_offset_of__triggerSoundEffect_3() { return static_cast<int32_t>(offsetof(CollisionDestroy_t3512342664, ____triggerSoundEffect_3)); }
	inline AudioClip_t794140988 * get__triggerSoundEffect_3() const { return ____triggerSoundEffect_3; }
	inline AudioClip_t794140988 ** get_address_of__triggerSoundEffect_3() { return &____triggerSoundEffect_3; }
	inline void set__triggerSoundEffect_3(AudioClip_t794140988 * value)
	{
		____triggerSoundEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&____triggerSoundEffect_3, value);
	}

	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(CollisionDestroy_t3512342664, ____animator_4)); }
	inline Animator_t2776330603 * get__animator_4() const { return ____animator_4; }
	inline Animator_t2776330603 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t2776330603 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier(&____animator_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
