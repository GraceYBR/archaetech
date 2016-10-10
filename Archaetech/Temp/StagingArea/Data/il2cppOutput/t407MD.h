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

extern "C" void t407_marshal(const t407& unmarshaled, t407_marshaled& marshaled);
extern "C" void t407_marshal_back(const t407_marshaled& marshaled, t407& unmarshaled);
extern "C" void t407_marshal_cleanup(t407_marshaled& marshaled);
