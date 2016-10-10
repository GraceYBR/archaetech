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

struct t1500;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m9385_gshared (t1500 * __this, const MethodInfo* method);
#define m9385(__this, method) (( void (*) (t1500 *, const MethodInfo*))m9385_gshared)(__this, method)
extern "C" void m9386_gshared (t14 * __this , const MethodInfo* method);
#define m9386(__this , method) (( void (*) (t14 * , const MethodInfo*))m9386_gshared)(__this , method)
extern "C" int32_t m9387_gshared (t1500 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m9387(__this, p0, p1, method) (( int32_t (*) (t1500 *, t14 *, t14 *, const MethodInfo*))m9387_gshared)(__this, p0, p1, method)
extern "C" t1500 * m9388_gshared (t14 * __this , const MethodInfo* method);
#define m9388(__this , method) (( t1500 * (*) (t14 * , const MethodInfo*))m9388_gshared)(__this , method)
