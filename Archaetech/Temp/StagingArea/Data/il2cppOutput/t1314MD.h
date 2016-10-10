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

struct t1314;

#include "codegen/il2cpp-codegen.h"
#include "t1186.h"

extern "C" void m7783_gshared (t1314 * __this, const MethodInfo* method);
#define m7783(__this, method) (( void (*) (t1314 *, const MethodInfo*))m7783_gshared)(__this, method)
extern "C" int32_t m9341_gshared (t1314 * __this, t1186  p0, const MethodInfo* method);
#define m9341(__this, p0, method) (( int32_t (*) (t1314 *, t1186 , const MethodInfo*))m9341_gshared)(__this, p0, method)
extern "C" bool m9342_gshared (t1314 * __this, t1186  p0, t1186  p1, const MethodInfo* method);
#define m9342(__this, p0, p1, method) (( bool (*) (t1314 *, t1186 , t1186 , const MethodInfo*))m9342_gshared)(__this, p0, p1, method)
