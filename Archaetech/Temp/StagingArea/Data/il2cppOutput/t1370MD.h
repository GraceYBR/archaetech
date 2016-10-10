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

struct t1370;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8242_gshared (t1370 * __this, const MethodInfo* method);
#define m8242(__this, method) (( void (*) (t1370 *, const MethodInfo*))m8242_gshared)(__this, method)
extern "C" void m8243_gshared (t14 * __this , const MethodInfo* method);
#define m8243(__this , method) (( void (*) (t14 * , const MethodInfo*))m8243_gshared)(__this , method)
extern "C" int32_t m8244_gshared (t1370 * __this, t14 * p0, const MethodInfo* method);
#define m8244(__this, p0, method) (( int32_t (*) (t1370 *, t14 *, const MethodInfo*))m8244_gshared)(__this, p0, method)
extern "C" bool m8245_gshared (t1370 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8245(__this, p0, p1, method) (( bool (*) (t1370 *, t14 *, t14 *, const MethodInfo*))m8245_gshared)(__this, p0, p1, method)
extern "C" t1370 * m8246_gshared (t14 * __this , const MethodInfo* method);
#define m8246(__this , method) (( t1370 * (*) (t14 * , const MethodInfo*))m8246_gshared)(__this , method)
