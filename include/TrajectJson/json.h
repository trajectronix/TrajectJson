#pragma once
#pragma once
#if !defined(__cplusplus)
#error "You are not using a C++ compiler"
#endif

#if !defined(__cpp_concepts)
#error "TrajectJson requires at least C++20 standard compiler."
#else
#if defined(_MSC_VER) && !defined(__clang__)
#pragma warning(push)
#pragma warning(disable : 4514)
#endif

#include "impl/inc.h"

#endif
#if defined(_MSC_VER) && !defined(__clang__)
#pragma warning(pop)
#endif