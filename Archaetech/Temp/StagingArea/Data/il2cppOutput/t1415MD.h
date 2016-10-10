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

struct t1415;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8605_gshared (t1415 * __this, const MethodInfo* method);
#define m8605(__this, method) (( void (*) (t1415 *, const MethodInfo*))m8605_gshared)(__this, method)
extern "C" int32_t m8606_gshared (t1415 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8606(__this, p0, p1, method) (( int32_t (*) (t1415 *, t14 *, t14 *, const MethodInfo*))m8606_gshared)(__this, p0, p1, method)
