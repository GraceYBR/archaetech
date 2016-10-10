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

struct t1473;
struct t14;
struct t50;
struct t51;

#include "codegen/il2cpp-codegen.h"
#include "t37.h"

extern "C" void m9188_gshared (t1473 * __this, t14 * p0, t37 p1, const MethodInfo* method);
#define m9188(__this, p0, p1, method) (( void (*) (t1473 *, t14 *, t37, const MethodInfo*))m9188_gshared)(__this, p0, p1, method)
extern "C" t14 * m9189_gshared (t1473 * __this, const MethodInfo* method);
#define m9189(__this, method) (( t14 * (*) (t1473 *, const MethodInfo*))m9189_gshared)(__this, method)
extern "C" t14 * m9190_gshared (t1473 * __this, t51 * p0, t14 * p1, const MethodInfo* method);
#define m9190(__this, p0, p1, method) (( t14 * (*) (t1473 *, t51 *, t14 *, const MethodInfo*))m9190_gshared)(__this, p0, p1, method)
extern "C" t14 * m9191_gshared (t1473 * __this, t14 * p0, const MethodInfo* method);
#define m9191(__this, p0, method) (( t14 * (*) (t1473 *, t14 *, const MethodInfo*))m9191_gshared)(__this, p0, method)
