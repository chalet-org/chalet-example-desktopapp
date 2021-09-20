/*
	Distributed under the OSI-approved BSD 3-Clause License.
	See accompanying file LICENSE.txt for details.
*/

#ifndef APP_WINDOWS_API_HPP
#define APP_WINDOWS_API_HPP

// Windows
#ifdef APP_WIN32
	#ifndef UNICODE
		#define UNICODE
	#endif

	#ifndef _UNICODE
		#define _UNICODE
	#endif

	#ifndef WIN32_ICON_MAIN
		#define WIN32_ICON_MAIN 2
	#endif

	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <winuser.h>

	#if defined(APP_MSVC) && !defined(__clang__)
		#pragma execution_character_set("utf-8")
	#endif
#endif

#endif // APP_WINDOWS_API_HPP
