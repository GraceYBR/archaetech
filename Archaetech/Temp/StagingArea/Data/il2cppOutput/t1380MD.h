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

struct t1380;
struct t14;
struct t50;
struct t51;

#include "codegen/il2cpp-codegen.h"
#include "t37.h"
#include "t1378.h"

extern "C" void m8372_gshared (t1380 * __this, t14 * p0, t37 p1, const MethodInfo* method);
#define m8372(__this, p0, p1, method) (( void (*) (t1380 *, t14 *, t37, const MethodInfo*))m8372_gshared)(__this, p0, p1, method)
extern "C" t1378  m8373_gshared (t1380 * __this, t14 * p0, int32_t p1, const MethodInfo* method);
#define m8373(__this, p0, p1, method) (( t1378  (*) (t1380 *, t14 *, int32_t, const MethodInfo*))m8373_gshared)(__this, p0, p1, method)
extern "C" t14 * m8374_gshared (t1380 * __this, t14 * p0, int32_t p1, t51 * p2, t14 * p3, const MethodInfo* method);
#define m8374(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1380 *, t14 *, int32_t, t51 *, t14 *, const MethodInfo*))m8374_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1378  m8375_gshared (t1380 * __this, t14 * p0, const MethodInfo* method);
#define m8375(__this, p0, method) (( t1378  (*) (t1380 *, t14 *, const MethodInfo*))m8375_gshared)(__this, p0, method)
