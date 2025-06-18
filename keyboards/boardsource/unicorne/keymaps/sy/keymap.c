#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // colemak
    [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,
                            LCTL_T(KC_ESC), LCTL_T(KC_A), LALT_T(KC_R), LGUI_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, RSFT_T(KC_N), RGUI_T(KC_E), RALT_T(KC_I), RCTL_T(KC_O), KC_QUOT,
                            KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT),
                            KC_LGUI, MO(3), KC_BSPC, KC_SPC, MO(4), KC_RALT
                            ),
    // qwerty
    [1] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                            LCTL_T(KC_ESC), LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,
                            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_M, KC_N, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT),
                            KC_LGUI, MO(3), KC_BSPC, KC_SPC, MO(4), KC_RALT
                            ),
    // gaming
    // TODO: add gaming num layer
    [2] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                            LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_M, KC_N, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT),
                            KC_RALT, MO(3), KC_SPC, KC_SPC, MO(4), KC_LGUI
                            ),
    // symbol
    [3] = LAYOUT_split_3x6_3(_______, KC_LABK, KC_LBRC, KC_LCBR, KC_LPRN, KC_TILDE, KC_PIPE, KC_RPRN, KC_RCBR, KC_RBRC, KC_RABK, _______,
                            _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_QUOTE, KC_DQT, _______,
                            _______, KC_BSLS, KC_TILDE, KC_GRV, KC_COLN, KC_SCLN, KC_UNDS, KC_MINUS, KC_PLUS, KC_EQL, KC_QUES, _______,
                            _______, _______, _______, KC_ESC, KC_TAB, _______),
    // nav
    [4] = LAYOUT_split_3x6_3(_______, KC_MINUS, KC_7, KC_8, KC_9, KC_SLSH, KC_PGUP, KC_HOME, KC_UP, KC_END, OSL(5),_______,
                            _______, KC_MINUS, KC_4, KC_5, KC_6, KC_ASTR, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, _______,
                            _______, KC_PLUS, KC_1, KC_2, KC_3, KC_TAB, KC_CAPS, KC_ESC, CW_TOGG, KC_RSFT, KC_PSCR, _______,
                            _______, KC_0, KC_ENT, _______, _______, _______),
    // fn
    // TODO: add toggle gaming layer and qwerty
    [5] = LAYOUT_split_3x6_3(RGB_TOG, _______,_______,_______,_______,_______,_______,_______,_______,KC_F11,KC_F12,_______,
                            _______, KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9, KC_F10,_______,
                            _______, _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                            _______,_______,_______,_______,_______,_______)
    // [_GAMING] = LAYOUT_split_3x6_3(),
    // [_SYMBOL] = LAYOUT_split_3x6_3(),
    // [_NAVIGATION] = LAYOUT_split_3x6_3(),
    // [_FN] = LAYOUT_split_3x6_3()
};

const uint16_t PROGMEM esc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(enter_combo, KC_ENT),
};

const key_override_t del_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t tab_override = ko_make_basic(MOD_BIT(KC_LSFT), KC_SPC, KC_TAB);
// const key_override_t tab_override = {.replacement      = KC_TAB,
//                                     .trigger           = KC_SPACE,
//                                     .trigger_mods      = MOD_BIT(KC_LSFT),
//                                     .suppressed_mods    = MOD_BIT(KC_LSFT),
//                                     .options           = ko_option_no_unregister_on_other_key_down,
//                                     .enabled           = NULL};
const key_override_t *key_overrides[] = {
    &del_override,
    &tab_override
};
