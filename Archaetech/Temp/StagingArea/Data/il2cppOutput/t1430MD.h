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

struct t1430;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8734_gshared (t1430 * __this, const MethodInfo* method);
#define m8734(__this, method) (( void (*) (t1430 *, const MethodInfo*))m8734_gshared)(__this, method)
extern "C" int32_t m8735_gshared (t1430 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8735(__this, p0, p1, method) (( int32_t (*) (t1430 *, t14 *, t14 *, const MethodInfo*))m8735_gshared)(__this, p0, p1, method)
