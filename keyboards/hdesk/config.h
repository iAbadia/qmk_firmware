/*
Copyright 2018 Inaki Abadia <i.abadiaosta@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x16FA
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Inaki Abadia
#define PRODUCT         hdesk
#define DESCRIPTION     HelpDesk/QMK

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#endif /* CONFIG_H */
