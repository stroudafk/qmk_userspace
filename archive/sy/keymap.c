// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "unicorne.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base qwerty layer
  [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LCTL_T(KC_ESC), LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), KC_LGUI, MO(2), QK_GESC, KC_SPC, MO(3), KC_RALT),
  // gaming layer
  [1] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), KC_RALT, MO(2), KC_SPC, KC_SPC, MO(3), KC_LGUI),
  // sym/num layer
  [2] = LAYOUT_split_3x6_3(QK_GESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_TRNS, KC_PIPE, KC_TILD, KC_GRV, KC_DQUO, KC_QUOT, KC_UNDS, KC_MINS, KC_PLUS, KC_EQL, KC_BSLS, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, TG(1)),
  // nav layer
  [3] = LAYOUT_split_3x6_3(RGB_TOG, KC_TRNS, RGB_VAI, RGB_SAI, RGB_SPI, RGB_MOD, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_CAPS, KC_RBRC, KC_TRNS, KC_TAB, RGB_VAD, RGB_SAD, RGB_SPD, RGB_RMOD, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_LBRC, KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_TAB, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS)
};

const uint16_t PROGMEM left_parenthesis_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM right_parenthesis_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM left_brace_combo[] = {RSFT_T(KC_J), RGUI_T(KC_K), COMBO_END};
const uint16_t PROGMEM right_brace_combo[] = {RGUI_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM left_bracket_combo[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM right_bracket_combo[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM caps_combo[] = {KC_T, KC_Y, COMBO_END};

combo_t key_combos[] = {
  COMBO(left_parenthesis_combo, S(KC_9)),
  COMBO(right_parenthesis_combo, S(KC_0)),
  COMBO(left_brace_combo, S(KC_LBRC)),
  COMBO(right_brace_combo, S(KC_RBRC)),
  COMBO(left_bracket_combo, KC_LBRC),
  COMBO(right_bracket_combo, KC_RBRC),
  COMBO(caps_combo, KC_CAPS),
};
