#pragma once

#ifdef WDE_PLATFORM_WINDOWS
	#ifdef WDE_BUILD_DLL
		#define WHITEDONUTENGINE_API __declspec(dllexport)
	#else
		#define WHITEDONUTENGINE_API __declspec(dllimport)
	#endif
#else
	#error White Donut Engine only supports Windows!
#endif