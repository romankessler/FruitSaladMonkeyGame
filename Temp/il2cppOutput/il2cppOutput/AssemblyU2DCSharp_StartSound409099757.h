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

#include "UnityEngine_UnityEngine_StateMachineBehaviour759180893.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartSound
struct  StartSound_t409099757  : public StateMachineBehaviour_t759180893
{
public:
	// UnityEngine.AudioClip StartSound::_audioClip
	AudioClip_t794140988 * ____audioClip_2;

public:
	inline static int32_t get_offset_of__audioClip_2() { return static_cast<int32_t>(offsetof(StartSound_t409099757, ____audioClip_2)); }
	inline AudioClip_t794140988 * get__audioClip_2() const { return ____audioClip_2; }
	inline AudioClip_t794140988 ** get_address_of__audioClip_2() { return &____audioClip_2; }
	inline void set__audioClip_2(AudioClip_t794140988 * value)
	{
		____audioClip_2 = value;
		Il2CppCodeGenWriteBarrier(&____audioClip_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
