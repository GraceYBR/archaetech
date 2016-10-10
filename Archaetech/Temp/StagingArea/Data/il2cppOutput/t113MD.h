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
#include "t113.h"

extern "C" t12* m437 (t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m438 (t113 * __this, t12* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t12* m439 (t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m440 (t113 * __this, t12* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t113_marshal(const t113& unmarshaled, t113_marshaled& marshaled);
extern "C" void t113_marshal_back(const t113_marshaled& marshaled, t113& unmarshaled);
extern "C" void t113_marshal_cleanup(t113_marshaled& marshaled);
