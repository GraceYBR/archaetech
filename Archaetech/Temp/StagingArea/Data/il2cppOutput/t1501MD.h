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

struct t1501;

#include "codegen/il2cpp-codegen.h"
#include "t271.h"

extern "C" void m9389_gshared (t1501 * __this, const MethodInfo* method);
#define m9389(__this, method) (( void (*) (t1501 *, const MethodInfo*))m9389_gshared)(__this, method)
extern "C" int32_t m9390_gshared (t1501 * __this, t271  p0, t271  p1, const MethodInfo* method);
#define m9390(__this, p0, p1, method) (( int32_t (*) (t1501 *, t271 , t271 , const MethodInfo*))m9390_gshared)(__this, p0, p1, method)
