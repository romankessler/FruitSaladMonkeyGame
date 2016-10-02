#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemHeart
struct  ItemHeart_t4136081619  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 ItemHeart::_healingHeartAmount
	int32_t ____healingHeartAmount_2;
	// UnityEngine.AudioClip ItemHeart::SoundEffect
	AudioClip_t794140988 * ___SoundEffect_3;

public:
	inline static int32_t get_offset_of__healingHeartAmount_2() { return static_cast<int32_t>(offsetof(ItemHeart_t4136081619, ____healingHeartAmount_2)); }
	inline int32_t get__healingHeartAmount_2() const { return ____healingHeartAmount_2; }
	inline int32_t* get_address_of__healingHeartAmount_2() { return &____healingHeartAmount_2; }
	inline void set__healingHeartAmount_2(int32_t value)
	{
		____healingHeartAmount_2 = value;
	}

	inline static int32_t get_offset_of_SoundEffect_3() { return static_cast<int32_t>(offsetof(ItemHeart_t4136081619, ___SoundEffect_3)); }
	inline AudioClip_t794140988 * get_SoundEffect_3() const { return ___SoundEffect_3; }
	inline AudioClip_t794140988 ** get_address_of_SoundEffect_3() { return &___SoundEffect_3; }
	inline void set_SoundEffect_3(AudioClip_t794140988 * value)
	{
		___SoundEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&___SoundEffect_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
