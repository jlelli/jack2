/*
Copyright (C) 2004-2006 Grame

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __JackSystemDeps_WIN32__
#define __JackSystemDeps_WIN32__

#include <windows.h>

#define DRIVER_HANDLE HINSTANCE
#define LoadDriverModule(name) LoadLibrary((name))
#define UnloadDriverModule(handle) (FreeLibrary(((HMODULE)handle)))
#define GetProc(handle, name) GetProcAddress(((HMODULE)handle),(name))

#pragma warning (disable : 4786)

#define ENOBUFS 55

#define JACK_DEBUG false
#define try_start_server 0

#endif

