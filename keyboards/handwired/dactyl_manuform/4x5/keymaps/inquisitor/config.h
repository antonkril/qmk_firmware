/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
#define EE_HANDS
#define MASTER_LEFT

#ifdef MOUSEKEY_INTERVAL
#undef MOUSEKEY_INTERVAL
#endif
#define MOUSEKEY_INTERVAL 8 

#ifdef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_MAX_SPEED
#endif
#define MOUSEKEY_MAX_SPEED 35 

#ifdef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_TIME_TO_MAX
#endif
#define MOUSEKEY_TIME_TO_MAX 50

#ifdef MOUSEKEY_MOVE_DELTA
#undef MOUSEKEY_MOVE_DELTA
#endif
#define MOUSEKEY_MOVE_DELTA 1
