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

struct t1384;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8402_gshared (t1384 * __this, const MethodInfo* method);
#define m8402(__this, method) (( void (*) (t1384 *, const MethodInfo*))m8402_gshared)(__this, method)
extern "C" int32_t m8403_gshared (t1384 * __this, int32_t p0, const MethodInfo* method);
#define m8403(__this, p0, method) (( int32_t (*) (t1384 *, int32_t, const MethodInfo*))m8403_gshared)(__this, p0, method)
extern "C" bool m8404_gshared (t1384 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m8404(__this, p0, p1, method) (( bool (*) (t1384 *, int32_t, int32_t, const MethodInfo*))m8404_gshared)(__this, p0, p1, method)
