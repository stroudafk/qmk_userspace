#include "quantum.h"
#include "sy.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                oled_write_raw(layers_logo, sizeof(layers_logo));
                break;
            case 1:
                oled_write_raw(layers_logo, sizeof(layers_logo));
                break;
            case 2:
                oled_write_raw(layers_logo, sizeof(layers_logo));
                break;
            case 3:
                oled_write_raw(layers_logo, sizeof(layers_logo));
                break;
        }
    }
    else {
        oled_write_raw(compass_logo, sizeof(compass_logo));
    }

    return false;
}
#endif
