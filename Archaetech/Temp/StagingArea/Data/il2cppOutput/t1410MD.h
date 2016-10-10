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

struct t1410;
struct t14;
struct t50;
struct t51;

#include "codegen/il2cpp-codegen.h"
#include "t37.h"

extern "C" void m8585_gshared (t1410 * __this, t14 * p0, t37 p1, const MethodInfo* method);
#define m8585(__this, p0, p1, method) (( void (*) (t1410 *, t14 *, t37, const MethodInfo*))m8585_gshared)(__this, p0, p1, method)
extern "C" int32_t m8586_gshared (t1410 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8586(__this, p0, p1, method) (( int32_t (*) (t1410 *, t14 *, t14 *, const MethodInfo*))m8586_gshared)(__this, p0, p1, method)
extern "C" t14 * m8587_gshared (t1410 * __this, t14 * p0, t14 * p1, t51 * p2, t14 * p3, const MethodInfo* method);
#define m8587(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1410 *, t14 *, t14 *, t51 *, t14 *, const MethodInfo*))m8587_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m8588_gshared (t1410 * __this, t14 * p0, const MethodInfo* method);
#define m8588(__this, p0, method) (( int32_t (*) (t1410 *, t14 *, const MethodInfo*))m8588_gshared)(__this, p0, method)
