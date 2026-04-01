// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum my_keycodes {
  CNG = SAFE_RANGE,
};
enum layers {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ R │ 2 │ 3 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 7 │ 8 │ 9 │ 
     * └───┴───┴───┘
     */
    [_BASE] = LAYOUT(
        CNG,   KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,
        KC_MEDIA_PREV_TRACK,   QK_UNDERGLOW_HUE_UP,   KC_AUDIO_VOL_UP,
        KC_AUDIO_VOL_DOWN,   KC_AUDIO_MUTE,   QK_UNDERGLOW_MODE_NEXT
    )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CNG:
        if (record->event.pressed) {
            register_code(KC_GRAVE);
            register_code(KC_QUOTE);
            register_code(KC_SEMICOLON);

            unregister_code(KC_SEMICOLON);
            unregister_code(KC_QUOTE);
            unregister_code(KC_GRAVE);

      }
      return false;
    }
    return true;
}
