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

struct t1394;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8499_gshared (t1394 * __this, const MethodInfo* method);
#define m8499(__this, method) (( void (*) (t1394 *, const MethodInfo*))m8499_gshared)(__this, method)
extern "C" void m8500_gshared (t14 * __this , const MethodInfo* method);
#define m8500(__this , method) (( void (*) (t14 * , const MethodInfo*))m8500_gshared)(__this , method)
extern "C" int32_t m8501_gshared (t1394 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8501(__this, p0, p1, method) (( int32_t (*) (t1394 *, t14 *, t14 *, const MethodInfo*))m8501_gshared)(__this, p0, p1, method)
extern "C" t1394 * m8502_gshared (t14 * __this , const MethodInfo* method);
#define m8502(__this , method) (( t1394 * (*) (t14 * , const MethodInfo*))m8502_gshared)(__this , method)
