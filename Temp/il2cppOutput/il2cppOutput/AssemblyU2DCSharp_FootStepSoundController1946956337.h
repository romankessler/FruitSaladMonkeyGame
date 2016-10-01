#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FootStepSoundController
struct  FootStepSoundController_t1946956337  : public MonoBehaviour_t667441552
{
public:
	// PlayerController FootStepSoundController::<_playerController>k__BackingField
	PlayerController_t2866526589 * ___U3C_playerControllerU3Ek__BackingField_2;
	// UnityEngine.AudioSource FootStepSoundController::<_audioSource>k__BackingField
	AudioSource_t1740077639 * ___U3C_audioSourceU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3C_playerControllerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FootStepSoundController_t1946956337, ___U3C_playerControllerU3Ek__BackingField_2)); }
	inline PlayerController_t2866526589 * get_U3C_playerControllerU3Ek__BackingField_2() const { return ___U3C_playerControllerU3Ek__BackingField_2; }
	inline PlayerController_t2866526589 ** get_address_of_U3C_playerControllerU3Ek__BackingField_2() { return &___U3C_playerControllerU3Ek__BackingField_2; }
	inline void set_U3C_playerControllerU3Ek__BackingField_2(PlayerController_t2866526589 * value)
	{
		___U3C_playerControllerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3C_playerControllerU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3C_audioSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FootStepSoundController_t1946956337, ___U3C_audioSourceU3Ek__BackingField_3)); }
	inline AudioSource_t1740077639 * get_U3C_audioSourceU3Ek__BackingField_3() const { return ___U3C_audioSourceU3Ek__BackingField_3; }
	inline AudioSource_t1740077639 ** get_address_of_U3C_audioSourceU3Ek__BackingField_3() { return &___U3C_audioSourceU3Ek__BackingField_3; }
	inline void set_U3C_audioSourceU3Ek__BackingField_3(AudioSource_t1740077639 * value)
	{
		___U3C_audioSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3C_audioSourceU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
