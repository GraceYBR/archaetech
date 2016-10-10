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

struct t1492;

#include "codegen/il2cpp-codegen.h"
#include "t1167.h"

extern "C" void m9318_gshared (t1492 * __this, const MethodInfo* method);
#define m9318(__this, method) (( void (*) (t1492 *, const MethodInfo*))m9318_gshared)(__this, method)
extern "C" int32_t m9319_gshared (t1492 * __this, t1167  p0, t1167  p1, const MethodInfo* method);
#define m9319(__this, p0, p1, method) (( int32_t (*) (t1492 *, t1167 , t1167 , const MethodInfo*))m9319_gshared)(__this, p0, p1, method)
