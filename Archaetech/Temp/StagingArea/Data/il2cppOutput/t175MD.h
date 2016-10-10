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


#include "codegen/il2cpp-codegen.h"

extern "C" void t175_marshal(const t175& unmarshaled, t175_marshaled& marshaled);
extern "C" void t175_marshal_back(const t175_marshaled& marshaled, t175& unmarshaled);
extern "C" void t175_marshal_cleanup(t175_marshaled& marshaled);
