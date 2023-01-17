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
#define _LAYER6 6

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
};

#define KC_CAPP LGUI(LSFT(KC_4)) 

#define MP_SFT OSM(MOD_LSFT)
#define MP_A LCTL_T(KC_A)
#define MP_R LALT_T(KC_R)
#define MP_S LGUI_T(KC_S)
#define MP_T LSFT_T(KC_T)
#define MP_N LSFT_T(KC_N)
#define MP_E LGUI_T(KC_E)
#define MP_I LALT_T(KC_I)
#define MP_O LCTL_T(KC_O)
#define MP_L1 LT(_LAYER1, KC_ESC)
#define MP_L2 LT(_LAYER2, KC_TAB)
#define MP_L3 LT(_LAYER3, KC_SPC)
#define MP_L4 LT(_LAYER4, KC_ENT)
#define MP_L5 LT(_LAYER5, KC_BSPC)
#define MP_L6 LT(_LAYER6, OSM(MOD_LGUI))


enum combos {
  QW_PAREN,
  FP_BRC,
  LU_BRC,
  YS_PAREN
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM ys_combo[] = {KC_Y, KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [QW_PAREN] = COMBO(qw_combo, KC_LPRN),
  [FP_BRC] = COMBO(fp_combo, KC_LBRC),
  [LU_BRC] = COMBO(lu_combo, KC_RBRC),
  [YS_PAREN] = COMBO(ys_combo, KC_RPRN),
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(
  //,--------+--------+-------+-------+-------+-------.        .-------+--------+---------+-------+---------+--------, 
    DF(2),      KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,           KC_J,     KC_L,   KC_U,     KC_Y,   KC_SCLN,  KC_EQL, 
  //,--------+--------+-------+-------+-------+-------.        .-------+--------+---------+-------+---------+--------, 
    KC_GRAVE,   MP_A,   MP_R,   MP_S,   MP_T,   KC_G,           KC_M,     MP_N,   MP_E,     MP_I,   MP_O,     KC_QUOT, 
  //,--------+--------+-------+-------+-------+-------.        .-------+--------+---------+-------+---------+--------, 
    MP_SFT,     KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,           KC_K,     KC_H,   KC_COMM,  KC_DOT, KC_SLSH,  KC_MINS, 
                            //,-------+-------+-------.        .-------+--------+--------,
                                MP_L1,  MP_L2,  MP_L3,          MP_L4,    MP_L5,  MP_L6
                            //,-------+-------+-------.        .-------+--------+--------,
),

[_LAYER1] = LAYOUT(
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_TAB,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_UNDO,        KC_CUT,         KC_COPY,        KC_PSTE,        KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_GRAVE,   KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,          KC_MPRV,        KC_MNXT,        KC_VOLD,        KC_VOLU,        KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    MP_SFT,     KC_NO,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
                                                KC_ESC,         KC_TAB,         KC_SPC,         KC_ENT,         KC_BSPC,    -    KC_ESC
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
),

[_LAYER2] = LAYOUT(
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    DF(0),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_CAPP,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_GRAVE,   KC_LCTL,        KC_LALT,        KC_LGUI,        KC_NO,          KC_NO,          KC_MS_L,        KC_MS_D,        KC_MS_U,        KC_MS_R,        KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    MP_SFT,     KC_NO,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_WH_L,        KC_WH_D,        KC_WH_U,        KC_WH_R,        KC_NO,          KC_NO, 
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
                                                KC_ESC,         KC_TAB,         KC_SPC,         KC_BTN1,        KC_BTN2,        KC_BTN3
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
),

[_LAYER3] = LAYOUT(
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_TAB,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_GRAVE,   KC_LCTL,        KC_LALT,        KC_LGUI,        KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    MP_SFT,     LGUI(KC_Z),  LGUI(KC_X),    LGUI(KC_C),    LGUI(KC_V),          KC_NO,          KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         KC_NO,          KC_NO, 
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
                                                KC_ESC,         KC_TAB,         KC_SPC,         KC_ENT,         KC_DELETE,      KC_ESC
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
    ),

[_LAYER4] = LAYOUT(
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_TAB,     KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_EQL, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_GRAVE,   KC_4,           KC_5,           KC_6,           KC_MINS,        KC_EQL,          KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,          KC_NO,          KC_QUOT, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    MP_SFT,     KC_1,           KC_2,           KC_3,           KC_DOT,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
                                                KC_NO,          KC_NO,          OSM(MOD_LGUI),   KC_ENT,         KC_BSPC,        KC_LGUI
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
    ),

[_LAYER5] = LAYOUT(
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_NO,      KC_AMPR,        KC_ASTR,        KC_BSLS,        KC_LPRN,        KC_RPRN,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_NO,      KC_DLR,         KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_NO,          KC_NO,          KC_LGUI,        KC_LALT,        KC_LCTL,        KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    MP_SFT,     KC_EXLM,        KC_AT,          KC_HASH,        LSFT(KC_LBRC),  LSFT(KC_RBRC),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RSFT, 
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
                                                KC_NO,          KC_NO,          KC_NO,          KC_ENT,         KC_BSPC,        KC_LGUI
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
    ),
[_LAYER6] = LAYOUT(
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
  //,---------+---------------+---------------+---------------+---------------+-------------.  .--------------+---------------+---------------+---------------+---------------+---------, 
    MP_SFT,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
                                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
                                             //,--------------+---------------+-------------.  .--------------+---------------+--------, 
    
)
};