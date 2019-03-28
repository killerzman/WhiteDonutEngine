#pragma once

#ifdef WDE_PLATFORM_WINDOWS
#ifdef WDE_BUILD_DLL
#define WDE_API __declspec(dllexport)
#else
#define WDE_API __declspec(dllimport)
#endif
#else
#error White Donut Engine only supports Windows!
#endif

#ifdef WDE_ENABLE_ASSERTS
#define WDE_ASSERT(x, ...) { if(!(x)) { WDE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define WDE_CORE_ASSERT(x, ...) { if(!(x)) { WDE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define WDE_ASSERT(x, ...)
#define WDE_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)