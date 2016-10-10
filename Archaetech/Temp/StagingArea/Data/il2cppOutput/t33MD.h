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

struct t33;
struct t33_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m326 (t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t33_marshal(const t33& unmarshaled, t33_marshaled& marshaled);
extern "C" void t33_marshal_back(const t33_marshaled& marshaled, t33& unmarshaled);
extern "C" void t33_marshal_cleanup(t33_marshaled& marshaled);
