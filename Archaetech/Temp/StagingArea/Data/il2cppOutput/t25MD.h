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

struct t25;
struct t25_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m231 (t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m232 (t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m233 (t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t25_marshal(const t25& unmarshaled, t25_marshaled& marshaled);
extern "C" void t25_marshal_back(const t25_marshaled& marshaled, t25& unmarshaled);
extern "C" void t25_marshal_cleanup(t25_marshaled& marshaled);
