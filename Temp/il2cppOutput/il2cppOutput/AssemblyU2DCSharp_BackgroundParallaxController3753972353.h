#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundParallaxController
struct  BackgroundParallaxController_t3753972353  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 BackgroundParallaxController::_lastPosition
	Vector3_t4282066566  ____lastPosition_2;
	// UnityEngine.Transform[] BackgroundParallaxController::BackroundItems
	TransformU5BU5D_t3792884695* ___BackroundItems_3;
	// System.Single BackgroundParallaxController::ParallaxReductionFactor
	float ___ParallaxReductionFactor_4;
	// System.Single BackgroundParallaxController::ParallaxScale
	float ___ParallaxScale_5;
	// System.Single BackgroundParallaxController::Smoothing
	float ___Smoothing_6;

public:
	inline static int32_t get_offset_of__lastPosition_2() { return static_cast<int32_t>(offsetof(BackgroundParallaxController_t3753972353, ____lastPosition_2)); }
	inline Vector3_t4282066566  get__lastPosition_2() const { return ____lastPosition_2; }
	inline Vector3_t4282066566 * get_address_of__lastPosition_2() { return &____lastPosition_2; }
	inline void set__lastPosition_2(Vector3_t4282066566  value)
	{
		____lastPosition_2 = value;
	}

	inline static int32_t get_offset_of_BackroundItems_3() { return static_cast<int32_t>(offsetof(BackgroundParallaxController_t3753972353, ___BackroundItems_3)); }
	inline TransformU5BU5D_t3792884695* get_BackroundItems_3() const { return ___BackroundItems_3; }
	inline TransformU5BU5D_t3792884695** get_address_of_BackroundItems_3() { return &___BackroundItems_3; }
	inline void set_BackroundItems_3(TransformU5BU5D_t3792884695* value)
	{
		___BackroundItems_3 = value;
		Il2CppCodeGenWriteBarrier(&___BackroundItems_3, value);
	}

	inline static int32_t get_offset_of_ParallaxReductionFactor_4() { return static_cast<int32_t>(offsetof(BackgroundParallaxController_t3753972353, ___ParallaxReductionFactor_4)); }
	inline float get_ParallaxReductionFactor_4() const { return ___ParallaxReductionFactor_4; }
	inline float* get_address_of_ParallaxReductionFactor_4() { return &___ParallaxReductionFactor_4; }
	inline void set_ParallaxReductionFactor_4(float value)
	{
		___ParallaxReductionFactor_4 = value;
	}

	inline static int32_t get_offset_of_ParallaxScale_5() { return static_cast<int32_t>(offsetof(BackgroundParallaxController_t3753972353, ___ParallaxScale_5)); }
	inline float get_ParallaxScale_5() const { return ___ParallaxScale_5; }
	inline float* get_address_of_ParallaxScale_5() { return &___ParallaxScale_5; }
	inline void set_ParallaxScale_5(float value)
	{
		___ParallaxScale_5 = value;
	}

	inline static int32_t get_offset_of_Smoothing_6() { return static_cast<int32_t>(offsetof(BackgroundParallaxController_t3753972353, ___Smoothing_6)); }
	inline float get_Smoothing_6() const { return ___Smoothing_6; }
	inline float* get_address_of_Smoothing_6() { return &___Smoothing_6; }
	inline void set_Smoothing_6(float value)
	{
		___Smoothing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
