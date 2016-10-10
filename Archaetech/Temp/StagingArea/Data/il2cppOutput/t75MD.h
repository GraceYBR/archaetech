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

extern "C" void t75_marshal(const t75& unmarshaled, t75_marshaled& marshaled);
extern "C" void t75_marshal_back(const t75_marshaled& marshaled, t75& unmarshaled);
extern "C" void t75_marshal_cleanup(t75_marshaled& marshaled);
