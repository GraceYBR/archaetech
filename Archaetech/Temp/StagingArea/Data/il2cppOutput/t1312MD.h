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

struct t1312;

#include "codegen/il2cpp-codegen.h"
#include "t1167.h"

extern "C" void m7778_gshared (t1312 * __this, const MethodInfo* method);
#define m7778(__this, method) (( void (*) (t1312 *, const MethodInfo*))m7778_gshared)(__this, method)
extern "C" int32_t m9320_gshared (t1312 * __this, t1167  p0, const MethodInfo* method);
#define m9320(__this, p0, method) (( int32_t (*) (t1312 *, t1167 , const MethodInfo*))m9320_gshared)(__this, p0, method)
extern "C" bool m9321_gshared (t1312 * __this, t1167  p0, t1167  p1, const MethodInfo* method);
#define m9321(__this, p0, p1, method) (( bool (*) (t1312 *, t1167 , t1167 , const MethodInfo*))m9321_gshared)(__this, p0, p1, method)
