#ifndef APP_DEFINES_HPP
#define APP_DEFINES_HPP

#if defined(__APPLE__)
	#ifndef APP_MACOS
		#define APP_MACOS
	#endif
#elif defined(__linux__)
	#ifndef APP_LINUX
		#define APP_LINUX
	#endif
#elif defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
	#ifndef APP_WIN32
		#define APP_WIN32
	#endif
#else
static_assert(false, "Unknown platform");
#endif


#if defined(_MSC_VER)
	#ifndef APP_MSVC
		#define APP_MSVC
	#endif
#elif defined(__clang__)
	#ifndef APP_CLANG
		#define APP_CLANG
	#endif
#endif


#endif // APP_DEFINES_HPP
