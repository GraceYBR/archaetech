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

struct t1353;
struct t14;
struct t50;
struct t51;

#include "codegen/il2cpp-codegen.h"
#include "t37.h"

extern "C" void m8088_gshared (t1353 * __this, t14 * p0, t37 p1, const MethodInfo* method);
#define m8088(__this, p0, p1, method) (( void (*) (t1353 *, t14 *, t37, const MethodInfo*))m8088_gshared)(__this, p0, p1, method)
extern "C" void m8089_gshared (t1353 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8089(__this, p0, p1, method) (( void (*) (t1353 *, t14 *, t14 *, const MethodInfo*))m8089_gshared)(__this, p0, p1, method)
extern "C" t14 * m8090_gshared (t1353 * __this, t14 * p0, t14 * p1, t51 * p2, t14 * p3, const MethodInfo* method);
#define m8090(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1353 *, t14 *, t14 *, t51 *, t14 *, const MethodInfo*))m8090_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m8091_gshared (t1353 * __this, t14 * p0, const MethodInfo* method);
#define m8091(__this, p0, method) (( void (*) (t1353 *, t14 *, const MethodInfo*))m8091_gshared)(__this, p0, method)
