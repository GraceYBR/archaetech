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


#include "codegen/il2cpp-codegen.h"
#include "t5.h"
#include "t16.h"
#include "t10.h"

extern "C" t16  m7 (t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m11 (t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_marshal(const t5& unmarshaled, t5_marshaled& marshaled);
extern "C" void t5_marshal_back(const t5_marshaled& marshaled, t5& unmarshaled);
extern "C" void t5_marshal_cleanup(t5_marshaled& marshaled);
