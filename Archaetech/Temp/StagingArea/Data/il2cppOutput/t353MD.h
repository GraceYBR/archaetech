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

struct t12;

#include "codegen/il2cpp-codegen.h"
#include "t353.h"

extern "C" void m1391 (t353 * __this, t12* p0, t12* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t353_marshal(const t353& unmarshaled, t353_marshaled& marshaled);
extern "C" void t353_marshal_back(const t353_marshaled& marshaled, t353& unmarshaled);
extern "C" void t353_marshal_cleanup(t353_marshaled& marshaled);
