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

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef OLED_FONT_H
//#define OLED_FONT_H "keyboards/lily58/keymaps/lily58-corne-version/glcdfont.c"
#define OLED_FONT_H "keyboards/crkbd/keymaps/monti-corne/glcdfont.c"

#define OLED_TIMEOUT 30000
#define OLED_BRIGHTNESS 192 // d75%
#define OLED_UPDATE_INTERVAL 100 //in ms

#define LAYER_LOCK_IDLE_TIMEOUT 60000  // Turn off layer lock after 60 seconds.

// Change debounce time for eager
#undef DEBOUNCE
#define DEBOUNCE 20

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// If a second key is pressed when holding a dual action key it will
// send the hold action key immediatly
#define PERMISSIVE_HOLD_PER_KEY

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

#define XXX KC_NO
#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#define U_WINLK LGUI(KC_L) // Windows key & l for locking PC
