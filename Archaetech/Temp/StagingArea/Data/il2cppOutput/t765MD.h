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

extern "C" void t765_marshal(const t765& unmarshaled, t765_marshaled& marshaled);
extern "C" void t765_marshal_back(const t765_marshaled& marshaled, t765& unmarshaled);
extern "C" void t765_marshal_cleanup(t765_marshaled& marshaled);
