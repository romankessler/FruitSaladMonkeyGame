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

// CameraFollow
struct CameraFollow_t3148844886;

#include "codegen/il2cpp-codegen.h"

// System.Void CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m2547336197 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::Start()
extern "C"  void CameraFollow_Start_m1494473989 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::FixedUpdate()
extern "C"  void CameraFollow_FixedUpdate_m2858109376 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CameraFollow::GetYTargetPosition(System.Single)
extern "C"  float CameraFollow_GetYTargetPosition_m441505667 (CameraFollow_t3148844886 * __this, float ___playerVelocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CameraFollow::GetXTargetPosition(System.Single)
extern "C"  float CameraFollow_GetXTargetPosition_m430189540 (CameraFollow_t3148844886 * __this, float ___playerVelocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
