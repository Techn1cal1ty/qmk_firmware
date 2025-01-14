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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _QWERTY,
  _RAISE,
  _LOWER,
  _ADJUST

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* OWERTY
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------' ,-------------.       ,-------------. `----------------------------------'
 *                                        | App  | LGui |       | Alt  |CtrEsc|
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Home |       | PgUp |      |      |
 *                                 | Space|Backsp|------|       |------|  Tab |Enter |
 *                                 |      |ace   | End  |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 */

LAYOUT_void_ergo(
            KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_GRV,             KC_MINS,    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_EQL,
            KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_LCBR,            KC_RCBR,    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
            KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_LPRN,            KC_RPRN,    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
MT(KC_LSFT, OSL(3)),  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
            KC_LCTL,  TT(1),    TT(2),    KC_LGUI,  KC_LALT,                                                      TT(2),    TT(1),    KC_RALT,  KC_APP,   KC_RCTL,
                                                              KC_LEFT,  KC_RGHT,            KC_DOWN,  KC_UP,
                                                    KC_BSPC,  KC_SPC,   KC_HOME,            KC_PGUP,  KC_SPC,   KC_ENT,
                                                                        KC_END,             KC_PGDN
),
LAYOUT_void_ergo(
    TO(0),    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,              KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,
    KC_TRNS,  KC_EXLM,  KC_AT,    KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_TRNS,            KC_TRNS,  KC_UP,    KC_7,     KC_8,     KC_9,     KC_ASTR,  KC_TRNS,
    KC_TRNS,  KC_HASH,  KC_DLR,   KC_LPRN,  KC_RPRN,  KC_GRV,   KC_TRNS,            KC_TRNS,  KC_DOWN,  KC_4,     KC_5,     KC_6,     KC_PLUS,  KC_TRNS,
    KC_TRNS,  KC_PERC,  KC_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,                                KC_AMPR,  KC_1,     KC_2,     KC_3,     KC_BSLS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                    KC_0,     KC_EQL,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                      KC_VOLD,  KC_VOLU,            KC_MNXT,  KC_MPRV,
                                            TO(0),    KC_PSCR,  KC_TRNS,            KC_TRNS,  KC_MPLY,  KC_DEL,
                                                                KC_TRNS,            KC_TRNS
),
LAYOUT_void_ergo(
    TO(0),    KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,             KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_F24,   KC_NO,
    KC_NO,    KC_NO,    KC_UP,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_NO,    KC_NO,    KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
                                                      KC_NO,    KC_NO,              KC_NO,    KC_NO,
                                            TO(0),    TO(0),    KC_NO,              KC_NO,    TO(0),    TO(0),
                                                                KC_NO,              KC_NO
),
LAYOUT_void_ergo(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LBRC,            KC_RBRC,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LT,              KC_GT,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                      KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                                KC_TRNS,            KC_TRNS
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

/*
 * ROTARY ENCODER
 */

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code16(LCTL(KC_Y));
        } else {
            tap_code16(LCTL(KC_Z));
        }
    }
    return true;
}

void matrix_init_user(void) {

}
