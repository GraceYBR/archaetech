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

struct t32;
struct t32_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m23 (t32 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t32_marshal(const t32& unmarshaled, t32_marshaled& marshaled);
extern "C" void t32_marshal_back(const t32_marshaled& marshaled, t32& unmarshaled);
extern "C" void t32_marshal_cleanup(t32_marshaled& marshaled);
