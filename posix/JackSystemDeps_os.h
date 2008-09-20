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

#ifndef __JackSystemDeps_POSIX__
#define __JackSystemDeps_POSIX__

#include <inttypes.h>
#include <sys/types.h>
#include <signal.h>
#include <dlfcn.h>

#define DRIVER_HANDLE void*
#define LoadDriverModule(name) dlopen((name), RTLD_NOW | RTLD_GLOBAL)
#define UnloadDriverModule(handle) dlclose((handle))
#define GetProc(handle, name) dlsym((handle), (name))

#define JACK_DEBUG (getenv("JACK_CLIENT_DEBUG") && strcmp(getenv("JACK_CLIENT_DEBUG"), "on") == 0)

#endif
