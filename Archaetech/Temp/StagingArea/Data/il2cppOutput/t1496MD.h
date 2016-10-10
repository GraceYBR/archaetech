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

struct t1496;

#include "codegen/il2cpp-codegen.h"
#include "t1186.h"

extern "C" void m9339_gshared (t1496 * __this, const MethodInfo* method);
#define m9339(__this, method) (( void (*) (t1496 *, const MethodInfo*))m9339_gshared)(__this, method)
extern "C" int32_t m9340_gshared (t1496 * __this, t1186  p0, t1186  p1, const MethodInfo* method);
#define m9340(__this, p0, p1, method) (( int32_t (*) (t1496 *, t1186 , t1186 , const MethodInfo*))m9340_gshared)(__this, p0, p1, method)
