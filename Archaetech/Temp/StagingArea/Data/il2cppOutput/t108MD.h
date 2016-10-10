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

struct t108;
struct t108_marshaled;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m478 (t108 * __this, t14 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m479 (t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m480 (t14 * __this , t108 * p0, t108 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t108_marshal(const t108& unmarshaled, t108_marshaled& marshaled);
extern "C" void t108_marshal_back(const t108_marshaled& marshaled, t108& unmarshaled);
extern "C" void t108_marshal_cleanup(t108_marshaled& marshaled);
