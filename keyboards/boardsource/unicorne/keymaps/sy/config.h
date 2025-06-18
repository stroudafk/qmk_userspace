#pragma once

#undef STARTUP_SONG
#undef RBG_MATRIX_STARTUP_MODE
#undef RBG_MATRIX_DEFAULT_MODE

// #define DYNAMIC_KEYMAP_LAYER_COUNT 5 // do we need more layers? default max is 4
#define ENABLE_RBG_MATRIX_SOLID_COLOR
#define RBG_MATRIX_STARTUP_MODE RBG_MATRIX_SOLID_COLOR
#define RBG_MATRIX_DEFAULT_MODE RBG_MATRIX_SOLID_COLOR
// #define RBG_MATRIX_DEFAULT_HUE xx // choose some solid color later using HSV

#define COMBO_TERM 30
#define PERMISSIVE_HOLD
#define FLOW_TAP_TERM 150

// enum layers {
//     _COLEMAK,
//     _QWERTY,
//     _GAMING,
//     _SYMBOL,
//     _NAVIGATION,
//     _FN
// };
