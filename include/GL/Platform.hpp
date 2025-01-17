/*
	Copyright (C) 2012 Alexander Overvoorde

	Permission is hereby granted, free of charge, to any person obtaining a copy of
	this software and associated documentation files (the "Software"), to deal in
	the Software without restriction, including without limitation the rights to
	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
	the Software, and to permit persons to whom the Software is furnished to do so,
	subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
	FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
	COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
	IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE
*/

#pragma once

#ifndef OOGL_PLATFORM_HPP
#define OOGL_PLATFORM_HPP

/*
	Platform identification
*/

#if defined( _WIN32 )
	#define OOGL_PLATFORM_WINDOWS

	#if !defined(_INC_WINDOWS) // Windows.h included
		#if !defined(APIENTRY)
			#define APIENTRY __stdcall
		#endif
		#if !defined(WINGDIAPI)
			#define WINGDIAPI __declspec(dllimport)
		#endif
		#if !defined(CALLBACK)
			#define CALLBACK __stdcall
		#endif

		// Used by extensions
		#if !defined(WINAPI)
			#define WINAPI __stdcall
		#endif

		struct HWND__;
		typedef struct HWND__ *HWND;
		struct HDC__;
		typedef struct HDC__ *HDC;
		struct HGLRC__;
		typedef struct HGLRC__ *HGLRC;
		
		typedef union _LARGE_INTEGER LARGE_INTEGER;
		typedef LARGE_INTEGER *PLARGE_INTEGER;
	#endif

	#include <GL/GL.h>
#elif defined( __linux__ )
	#define OOGL_PLATFORM_LINUX
	#include <X11/Xlib.h>
	#include <GL/gl.h>
	#include <GL/glx.h>
	#include <sys/time.h>
#elif defined( __APPLE__ )
	#define OOGL_PLATFORM_OSX
#endif

/*
	Types
*/

namespace GL
{
	typedef unsigned char uchar;
	typedef unsigned short ushort;
	typedef unsigned int uint;
	typedef unsigned long ulong;

	namespace Type
	{
		enum type_t
		{
			Byte = GL_BYTE,
			UnsignedByte = GL_UNSIGNED_BYTE,
			Short = GL_SHORT,
			UnsignedShort = GL_UNSIGNED_SHORT,
			Int = GL_INT,
			UnsignedInt = GL_UNSIGNED_INT,
			Float = GL_FLOAT,
			Double = GL_DOUBLE
		};
	}

	typedef GLint Attribute;
	typedef GLint Uniform;
}

#endif