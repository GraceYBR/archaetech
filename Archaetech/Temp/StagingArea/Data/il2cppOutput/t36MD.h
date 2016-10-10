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

struct t36;
struct t36_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m26 (t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m27 (t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m28 (t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t36_marshal(const t36& unmarshaled, t36_marshaled& marshaled);
extern "C" void t36_marshal_back(const t36_marshaled& marshaled, t36& unmarshaled);
extern "C" void t36_marshal_cleanup(t36_marshaled& marshaled);
