/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

// This is using a Arduino Micro (non-Pro)
// wiring of each half
//#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }
//#define MATRIX_ROW_PINS { C7, F7, F6, F5, F4, F3, F2 }

#define SOFT_SERIAL_PIN D0
#define SPLIT_MODS_ENABLE

#define SPLIT_USB_DETECT
#define SPLIT_HAND_PIN B7

