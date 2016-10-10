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

struct t1396;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8505_gshared (t1396 * __this, const MethodInfo* method);
#define m8505(__this, method) (( void (*) (t1396 *, const MethodInfo*))m8505_gshared)(__this, method)
extern "C" int32_t m8506_gshared (t1396 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m8506(__this, p0, p1, method) (( int32_t (*) (t1396 *, int32_t, int32_t, const MethodInfo*))m8506_gshared)(__this, p0, p1, method)
