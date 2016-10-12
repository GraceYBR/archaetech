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

// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t2700926194;
struct ParticleCollisionEvent_t2700926194_marshaled_pinvoke;
struct ParticleCollisionEvent_t2700926194_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleCollisionEvent2700926194.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_velocity()
extern "C"  Vector3_t4282066566  ParticleCollisionEvent_get_velocity_m1889477221 (ParticleCollisionEvent_t2700926194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::get_collider()
extern "C"  Collider_t2939674232 * ParticleCollisionEvent_get_collider_m1680737446 (ParticleCollisionEvent_t2700926194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::InstanceIDToCollider(System.Int32)
extern "C"  Collider_t2939674232 * ParticleCollisionEvent_InstanceIDToCollider_m3381908217 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ParticleCollisionEvent_t2700926194;
struct ParticleCollisionEvent_t2700926194_marshaled_pinvoke;

extern "C" void ParticleCollisionEvent_t2700926194_marshal_pinvoke(const ParticleCollisionEvent_t2700926194& unmarshaled, ParticleCollisionEvent_t2700926194_marshaled_pinvoke& marshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_pinvoke_back(const ParticleCollisionEvent_t2700926194_marshaled_pinvoke& marshaled, ParticleCollisionEvent_t2700926194& unmarshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_pinvoke_cleanup(ParticleCollisionEvent_t2700926194_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ParticleCollisionEvent_t2700926194;
struct ParticleCollisionEvent_t2700926194_marshaled_com;

extern "C" void ParticleCollisionEvent_t2700926194_marshal_com(const ParticleCollisionEvent_t2700926194& unmarshaled, ParticleCollisionEvent_t2700926194_marshaled_com& marshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_com_back(const ParticleCollisionEvent_t2700926194_marshaled_com& marshaled, ParticleCollisionEvent_t2700926194& unmarshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_com_cleanup(ParticleCollisionEvent_t2700926194_marshaled_com& marshaled);
