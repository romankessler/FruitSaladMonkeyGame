#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionDamage
struct  CollisionDamage_t802146593  : public MonoBehaviour_t667441552
{
public:
	// System.Single CollisionDamage::_damage
	float ____damage_2;

public:
	inline static int32_t get_offset_of__damage_2() { return static_cast<int32_t>(offsetof(CollisionDamage_t802146593, ____damage_2)); }
	inline float get__damage_2() const { return ____damage_2; }
	inline float* get_address_of__damage_2() { return &____damage_2; }
	inline void set__damage_2(float value)
	{
		____damage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
