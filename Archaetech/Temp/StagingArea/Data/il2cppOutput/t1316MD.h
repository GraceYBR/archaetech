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

struct t1316;

#include "codegen/il2cpp-codegen.h"
#include "t271.h"

extern "C" void m7785_gshared (t1316 * __this, const MethodInfo* method);
#define m7785(__this, method) (( void (*) (t1316 *, const MethodInfo*))m7785_gshared)(__this, method)
extern "C" int32_t m9384_gshared (t1316 * __this, t271  p0, t271  p1, const MethodInfo* method);
#define m9384(__this, p0, p1, method) (( int32_t (*) (t1316 *, t271 , t271 , const MethodInfo*))m9384_gshared)(__this, p0, p1, method)
