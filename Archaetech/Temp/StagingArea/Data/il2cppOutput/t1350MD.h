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

struct t1350;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8085_gshared (t1350 * __this, const MethodInfo* method);
#define m8085(__this, method) (( void (*) (t1350 *, const MethodInfo*))m8085_gshared)(__this, method)
