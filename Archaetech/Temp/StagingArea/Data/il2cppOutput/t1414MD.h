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

struct t1414;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8601_gshared (t1414 * __this, const MethodInfo* method);
#define m8601(__this, method) (( void (*) (t1414 *, const MethodInfo*))m8601_gshared)(__this, method)
extern "C" void m8602_gshared (t14 * __this , const MethodInfo* method);
#define m8602(__this , method) (( void (*) (t14 * , const MethodInfo*))m8602_gshared)(__this , method)
extern "C" int32_t m8603_gshared (t1414 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8603(__this, p0, p1, method) (( int32_t (*) (t1414 *, t14 *, t14 *, const MethodInfo*))m8603_gshared)(__this, p0, p1, method)
extern "C" t1414 * m8604_gshared (t14 * __this , const MethodInfo* method);
#define m8604(__this , method) (( t1414 * (*) (t14 * , const MethodInfo*))m8604_gshared)(__this , method)
