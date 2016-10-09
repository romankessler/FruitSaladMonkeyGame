#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
extern "C"  Vector2_t4282066565  Collider2D_get_offset_m3854309972 (Collider2D_t1552025098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider2D::INTERNAL_get_offset(UnityEngine.Vector2&)
extern "C"  void Collider2D_INTERNAL_get_offset_m2687145813 (Collider2D_t1552025098 * __this, Vector2_t4282066565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C"  Rigidbody2D_t1743771669 * Collider2D_get_attachedRigidbody_m2908627162 (Collider2D_t1552025098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider2D::IsTouching(UnityEngine.Collider2D)
extern "C"  bool Collider2D_IsTouching_m1263557075 (Collider2D_t1552025098 * __this, Collider2D_t1552025098 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
