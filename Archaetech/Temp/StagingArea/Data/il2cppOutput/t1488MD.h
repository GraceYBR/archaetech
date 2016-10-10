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

struct t1488;

#include "codegen/il2cpp-codegen.h"
#include "t229.h"

extern "C" void m9301_gshared (t1488 * __this, const MethodInfo* method);
#define m9301(__this, method) (( void (*) (t1488 *, const MethodInfo*))m9301_gshared)(__this, method)
extern "C" int32_t m9302_gshared (t1488 * __this, t229  p0, t229  p1, const MethodInfo* method);
#define m9302(__this, p0, p1, method) (( int32_t (*) (t1488 *, t229 , t229 , const MethodInfo*))m9302_gshared)(__this, p0, p1, method)
