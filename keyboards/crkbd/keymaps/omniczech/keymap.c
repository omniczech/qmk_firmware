/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, 
    KC_GRAVE, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), KC_F, KC_G, LGUI_T(KC_H), LALT_T(KC_J), LCTL_T(KC_K), KC_L, KC_SCLN, KC_QUOT, 
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
    LT(1,KC_ESC), LT(2,KC_TAB), LT(3,KC_SPC), LT(4,KC_ENT), LT(5,KC_BSPC), KC_RGUI
),

[_LAYER1] = LAYOUT(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, KC_NO, KC_GRAVE, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_TAB, KC_SPC, KC_ENT, KC_BSPC, KC_ESC),

[_LAYER2] = LAYOUT(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRAVE, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_ESC, KC_TAB, KC_SPC, KC_BTN1, KC_BTN2, KC_BTN3),

[_LAYER3] = LAYOUT(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRAVE, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_ESC, KC_TAB, KC_SPC, KC_ENT, KC_BSPC, KC_ESC),

[_LAYER4] = LAYOUT(KC_TAB, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_GRAVE, KC_4, KC_5, KC_6, KC_MINS, KC_NO, KC_RGUI, KC_RALT, KC_RCTL, KC_NO, KC_NO, KC_QUOT, KC_LSFT, KC_1, KC_2, KC_3, KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_LGUI),

[_LAYER5] = LAYOUT(KC_NO, KC_AMPR, KC_ASTR, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DLR, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_NO, KC_LSFT, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_LGUI) 

};