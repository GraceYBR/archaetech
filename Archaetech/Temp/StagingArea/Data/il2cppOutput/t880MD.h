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
#include "t880.h"

extern "C" void m5441 (t880 * __this, t12* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t880_marshal(const t880& unmarshaled, t880_marshaled& marshaled);
extern "C" void t880_marshal_back(const t880_marshaled& marshaled, t880& unmarshaled);
extern "C" void t880_marshal_cleanup(t880_marshaled& marshaled);
