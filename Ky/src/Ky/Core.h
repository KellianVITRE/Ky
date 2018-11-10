#pragma once

#ifdef KY_PLATFORM_WINDOWS
	#ifdef KY_BUILD_DLL
		#define KY_API __declspec(dllexport)
	#else
		#define KY_API __declspec(dllimport)
	#endif
#else
	#error Ky only supports Windows!
#endif
