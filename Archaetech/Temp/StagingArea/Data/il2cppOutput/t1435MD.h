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

struct t1435;
struct t14;
struct t50;
struct t51;

#include "codegen/il2cpp-codegen.h"
#include "t37.h"
#include "t1433.h"

extern "C" void m8792_gshared (t1435 * __this, t14 * p0, t37 p1, const MethodInfo* method);
#define m8792(__this, p0, p1, method) (( void (*) (t1435 *, t14 *, t37, const MethodInfo*))m8792_gshared)(__this, p0, p1, method)
extern "C" t1433  m8793_gshared (t1435 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8793(__this, p0, p1, method) (( t1433  (*) (t1435 *, t14 *, t14 *, const MethodInfo*))m8793_gshared)(__this, p0, p1, method)
extern "C" t14 * m8794_gshared (t1435 * __this, t14 * p0, t14 * p1, t51 * p2, t14 * p3, const MethodInfo* method);
#define m8794(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1435 *, t14 *, t14 *, t51 *, t14 *, const MethodInfo*))m8794_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1433  m8795_gshared (t1435 * __this, t14 * p0, const MethodInfo* method);
#define m8795(__this, p0, method) (( t1433  (*) (t1435 *, t14 *, const MethodInfo*))m8795_gshared)(__this, p0, method)
