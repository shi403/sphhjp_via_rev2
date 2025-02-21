#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define KC_POWER KC_KB_POWER
#define KC_VOLUP KC_KB_VOLUME_UP
#define KC_VOLDW KC_KB_VOLUME_DOWN
#define KC_VOLMT KC_KB_MUTE
#define KC_MD_EJ KC_MEDIA_EJECT

enum layers{
    BASE,
    FUNC,
    NUM,
    RAISE2,
    RAISE3,
};

/* modify this keymap to customize. */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    /* Left */                                                             /* Right */
    KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,   KC_6,           KC_7,     KC_8,    KC_9,    KC_0,    JP_MINS,  JP_CIRC, JP_YEN,  KC_BSPC,
    KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,                   KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     JP_AT,   JP_LBRC, KC_ENT,
    KC_LCTL, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,                   KC_H,     KC_J,    KC_K,    KC_L,    JP_SCLN,  JP_COLN, JP_RBRC,
    KC_LSFT, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,                   KC_N,     KC_M,    JP_COMM, JP_DOT,  JP_SLSH,  JP_BSLS, KC_RSFT, KC_RSFT,
    KC_LCTL, MO(FUNC), KC_LGUI, KC_LALT, JP_MHEN, KC_SPC,                 KC_SPC,   JP_HENK, JP_KANA, MO(NUM), MO(FUNC), KC_LEFT,  KC_DOWN, KC_RIGHT
  ),
  [FUNC] = LAYOUT(
    /* Left */                                                            /* Right */
    JP_ZKHK, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,          KC_F7,    KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_INS,  KC_DEL,
    KC_CAPS, KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                    KC_6,     KC_7,    KC_8,    KC_9,     KC_0,    _______, KC_ESC,  KC_ENT,
    KC_LCTL, _______,  _______, _______, _______, _______,                 KC_LEFT,  KC_DOWN, KC_UP,   KC_RIGHT, JP_MINS, JP_CIRC, JP_YEN,
    KC_LSFT, _______,  _______, _______, _______, _______,                 _______,  KC_ENT,  KC_BTN1, KC_BTN2,  _______, _______, KC_RSFT, KC_RSFT,
    _______, MO(FUNC), _______, _______, _______, KC_SPC,                  KC_SPC,   _______, _______, MO(NUM),  MO(FUNC), KC_DEL, KC_RGUI, KC_RCTL
  ),
  [NUM] = LAYOUT(
    /* Left */                                                             /* Right */
    _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, KC_7   ,  KC_8   , KC_9   , _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, KC_4   ,  KC_5   , KC_6   ,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, KC_0   , KC_1   ,  KC_2   , KC_3   , _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, MO(NUM), MO(FUNC), _______, _______, _______
  ),
  [RAISE2] = LAYOUT(
    /* Left */                                                             /* Right */
    _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [RAISE3] = LAYOUT(
    /* Left */                                                             /* Right */
    _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, _______, _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {
}
