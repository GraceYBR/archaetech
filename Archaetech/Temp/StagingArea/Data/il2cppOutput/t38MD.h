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

struct t38;
struct t38_marshaled;
struct t12;
struct t28;

#include "codegen/il2cpp-codegen.h"

extern "C" void m29 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m30 (t14 * __this , t38 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t38 * m31 (t14 * __this , t12* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t38 * m32 (t14 * __this , t28 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t38 * m33 (t14 * __this , t28 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t38_marshal(const t38& unmarshaled, t38_marshaled& marshaled);
extern "C" void t38_marshal_back(const t38_marshaled& marshaled, t38& unmarshaled);
extern "C" void t38_marshal_cleanup(t38_marshaled& marshaled);
