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

// HeartContainer
struct  HeartContainer_t3899930363  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 HeartContainer::_heartAmount
	int32_t ____heartAmount_2;
	// UnityEngine.AudioClip HeartContainer::SoundEffect
	AudioClip_t794140988 * ___SoundEffect_3;

public:
	inline static int32_t get_offset_of__heartAmount_2() { return static_cast<int32_t>(offsetof(HeartContainer_t3899930363, ____heartAmount_2)); }
	inline int32_t get__heartAmount_2() const { return ____heartAmount_2; }
	inline int32_t* get_address_of__heartAmount_2() { return &____heartAmount_2; }
	inline void set__heartAmount_2(int32_t value)
	{
		____heartAmount_2 = value;
	}

	inline static int32_t get_offset_of_SoundEffect_3() { return static_cast<int32_t>(offsetof(HeartContainer_t3899930363, ___SoundEffect_3)); }
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
