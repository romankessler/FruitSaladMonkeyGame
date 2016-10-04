#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t4039083868;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeartSystem
struct  HeartSystem_t1045703157  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 HeartSystem::_healthPerHeart
	int32_t ____healthPerHeart_2;
	// UnityEngine.UI.Image[] HeartSystem::_heartImages
	ImageU5BU5D_t4039083868* ____heartImages_3;
	// UnityEngine.Sprite[] HeartSystem::_heartSprites
	SpriteU5BU5D_t2761310900* ____heartSprites_4;
	// System.Int32 HeartSystem::_maxHeartAmount
	int32_t ____maxHeartAmount_5;

public:
	inline static int32_t get_offset_of__healthPerHeart_2() { return static_cast<int32_t>(offsetof(HeartSystem_t1045703157, ____healthPerHeart_2)); }
	inline int32_t get__healthPerHeart_2() const { return ____healthPerHeart_2; }
	inline int32_t* get_address_of__healthPerHeart_2() { return &____healthPerHeart_2; }
	inline void set__healthPerHeart_2(int32_t value)
	{
		____healthPerHeart_2 = value;
	}

	inline static int32_t get_offset_of__heartImages_3() { return static_cast<int32_t>(offsetof(HeartSystem_t1045703157, ____heartImages_3)); }
	inline ImageU5BU5D_t4039083868* get__heartImages_3() const { return ____heartImages_3; }
	inline ImageU5BU5D_t4039083868** get_address_of__heartImages_3() { return &____heartImages_3; }
	inline void set__heartImages_3(ImageU5BU5D_t4039083868* value)
	{
		____heartImages_3 = value;
		Il2CppCodeGenWriteBarrier(&____heartImages_3, value);
	}

	inline static int32_t get_offset_of__heartSprites_4() { return static_cast<int32_t>(offsetof(HeartSystem_t1045703157, ____heartSprites_4)); }
	inline SpriteU5BU5D_t2761310900* get__heartSprites_4() const { return ____heartSprites_4; }
	inline SpriteU5BU5D_t2761310900** get_address_of__heartSprites_4() { return &____heartSprites_4; }
	inline void set__heartSprites_4(SpriteU5BU5D_t2761310900* value)
	{
		____heartSprites_4 = value;
		Il2CppCodeGenWriteBarrier(&____heartSprites_4, value);
	}

	inline static int32_t get_offset_of__maxHeartAmount_5() { return static_cast<int32_t>(offsetof(HeartSystem_t1045703157, ____maxHeartAmount_5)); }
	inline int32_t get__maxHeartAmount_5() const { return ____maxHeartAmount_5; }
	inline int32_t* get_address_of__maxHeartAmount_5() { return &____maxHeartAmount_5; }
	inline void set__maxHeartAmount_5(int32_t value)
	{
		____maxHeartAmount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
