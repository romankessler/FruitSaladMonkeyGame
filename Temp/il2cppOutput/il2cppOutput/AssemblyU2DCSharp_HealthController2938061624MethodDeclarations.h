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

// HealthController
struct HealthController_t2938061624;

#include "codegen/il2cpp-codegen.h"

// System.Void HealthController::.ctor()
extern "C"  void HealthController__ctor_m1958871651 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::Start()
extern "C"  void HealthController_Start_m906009443 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HealthController::GetMaxHealthPoints()
extern "C"  int32_t HealthController_GetMaxHealthPoints_m671190652 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::UpdateHearts()
extern "C"  void HealthController_UpdateHearts_m1027549207 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::UpdateMaxHearts()
extern "C"  void HealthController_UpdateMaxHearts_m2200077865 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::OnDestroy()
extern "C"  void HealthController_OnDestroy_m4113952220 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::ApplyDamage(System.Single)
extern "C"  void HealthController_ApplyDamage_m2515311021 (HealthController_t2938061624 * __this, float ___damage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::AddHealth(System.Int32)
extern "C"  void HealthController_AddHealth_m3856819951 (HealthController_t2938061624 * __this, int32_t ___healthPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::AddHeartContainer(System.Int32)
extern "C"  void HealthController_AddHeartContainer_m3837932590 (HealthController_t2938061624 * __this, int32_t ___heartAmount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::Damaging()
extern "C"  void HealthController_Damaging_m1208659949 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::ResetIsDamageable()
extern "C"  void HealthController_ResetIsDamageable_m3103535107 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::Dying()
extern "C"  void HealthController_Dying_m628758382 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::RestartLevel()
extern "C"  void HealthController_RestartLevel_m4121524214 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthController::StartGame()
extern "C"  void HealthController_StartGame_m4225539573 (HealthController_t2938061624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
