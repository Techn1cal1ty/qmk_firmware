/* Copyright 2020 Victor Lucachi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_void_ergo( \
    L00, L01, L02, L03, L04, L05, L06,              R01, R02, R03, R04, R05, R06, R07, \
    L10, L11, L12, L13, L14, L15, L16,              R11, R12, R13, R14, R15, R16, R17, \
    L20, L21, L22, L23, L24, L25, L26,              R21, R22, R23, R24, R25, R26, R27, \
    L30, L31, L32, L33, L34, L35,                        R32, R33, R34, R35, R36, R37, \
    L40, L41, L42, L43, L44,                                  R43, R44, R45, R46, R47, \
                                  L07, L27,    R20, R00, \
                             L46, L47, L37,    R30, R40, R41, \
                                       L17,    R10 \
) \
{ \
    { L00, L01, L02, L03, L04, L05, L06, L07 }, \
    { L10, L11, L12, L13, L14, L15, L16, L17 }, \
    { L20, L21, L22, L23, L24, L25, L26, L27 }, \
    { L30, L31, L32, L33, L34, L35, KC_NO, L37 }, \
    { L40, L41, L42, L43, L44, KC_NO, L46, L47 }, \
    { R00, R01, R02, R03, R04, R05, R06, R07 }, \
    { R10, R11, R12, R13, R14, R15, R16, R17 }, \
    { R20, R21, R22, R23, R24, R25, R26, R27 }, \
    { R30, KC_NO, R32, R33, R34, R35, R36, R37 }, \
    { R40, R41, KC_NO, R43, R44, R45, R46, R47 }, \
}

/*
#define LAYOUT_void_ergo( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
         L31, L32, L33, L34, L35, R30, R31, R32, R33, R34 \
) \
{ \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { KC_NO, L31, L32, L33, L34, L35 }, \
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, R32, R33, R34, KC_NO } \
}
*/
