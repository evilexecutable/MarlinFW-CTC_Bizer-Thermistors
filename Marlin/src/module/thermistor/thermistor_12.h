/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4700 K, 4.7 kOhm pull-up, (personal calibration for Makibox hot bed)
const short temptable_12[][2] PROGMEM = {
  { OV(  35), 180 }, // top rating 180C
  { OV( 211), 140 },
  { OV( 233), 135 },
  { OV( 261), 130 },
  { OV( 290), 125 },
  { OV( 328), 120 },
  { OV( 362), 115 },
  { OV( 406), 110 },
  { OV( 446), 105 },
  { OV( 496), 100 },
  { OV( 539),  95 },
  { OV( 585),  90 },
  { OV( 629),  85 },
  { OV( 675),  80 },
  { OV( 718),  75 },
  { OV( 758),  70 },
  { OV( 793),  65 },
  { OV( 822),  60 },
  { OV( 841),  55 },
  { OV( 875),  50 },
  { OV( 899),  45 },
  { OV( 926),  40 },
  { OV( 946),  35 },
  { OV( 962),  30 },
  { OV( 977),  25 },
  { OV( 987),  20 },
  { OV( 995),  15 },
  { OV(1001),  10 },
  { OV(1010),   0 },
  { OV(1023), -40 }
};
// #define NUMTEMPS 19
// const short temptable_12[NUMTEMPS][2] PROGMEM = {
//    {1, 601},
//    {17, 260},
//    {33, 213},
//    {49, 187},
//    {65, 170},
//    {81, 156},
//    {97, 144},
//    {113, 134},
//    {129, 125},
//    {145, 117},
//    {161, 109},
//    {177, 101},
//    {193, 94},
//    {209, 86},
//    {225, 78},
//    {241, 69},
//    {257, 59},
//    {273, 46},
//    {289, 28}
// };
