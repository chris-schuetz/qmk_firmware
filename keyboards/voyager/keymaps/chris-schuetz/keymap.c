#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DE_LBRC,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DE_RBRC,
    KC_LEFT_ALT,    KC_B,           DE_Y,           KC_O,           KC_U,           DE_QUOT,                                        DE_DQOT,        KC_L,           KC_D,           KC_W,           KC_V,           DE_Z,
    KC_LEFT_CTRL,   KC_C,           KC_I,           KC_E,           KC_A,           KC_COMMA,                                       KC_DOT,         KC_H,           KC_T,           KC_S,           KC_N,           KC_Q,
    KC_LEFT_GUI,    KC_G,           KC_X,           KC_J,           KC_K,           DE_MINS,                                        DE_EXLM,        KC_R,           KC_M,           KC_F,           KC_P,           KC_BSPC,
                                                                                    LT(1,KC_SPACE), KC_TAB,         LT(4,KC_ENTER),KC_RIGHT_SHIFT
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, DE_SS,          DE_DLR,         DE_OE,          DE_UE,          DE_GRV,                                         DE_SLSH,        KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, ES_CCED,        DE_HASH,        DE_AT,          DE_AE,          DE_ACUT,                                        DE_BSLS,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       ES_NTIL,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ES_IEXL,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_T,           KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_G,           KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_7,           KC_6,           DE_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                    KC_SPACE,       KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_H,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_C,           KC_I,           KC_M,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDN,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          TO(2),          TO(3),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t lcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, DE_LBRC, DE_LCBR);
const key_override_t pipe_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, DE_PIPE);
const key_override_t equl_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_2, DE_EQL);
const key_override_t tild_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, DE_TILD);
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_4, DE_PLUS);
const key_override_t less_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_5, DE_LESS);
const key_override_t more_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, DE_MORE);
const key_override_t circ_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, DE_CIRC);
const key_override_t ampr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, DE_AMPR);
const key_override_t perc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, DE_PERC);
const key_override_t astr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, DE_ASTR);
const key_override_t rcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, DE_RBRC, DE_RCBR);
const key_override_t lprn_key_override = ko_make_basic(MOD_MASK_SHIFT, DE_QUOT, DE_LPRN);
const key_override_t rprn_key_override = ko_make_basic(MOD_MASK_SHIFT, DE_DQOT, DE_RPRN);
const key_override_t qust_key_override = ko_make_basic(MOD_MASK_SHIFT, DE_EXLM, DE_QST);
const key_override_t iexl_key_override = ko_make_basic(MOD_MASK_SHIFT, ES_IEXL, ES_IQUE);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
    &lcbr_key_override,
    &pipe_key_override,
    &equl_key_override,
    &tild_key_override,
    &plus_key_override,
    &less_key_override,
    &more_key_override,
    &circ_key_override,
    &ampr_key_override,
    &perc_key_override,
    &astr_key_override,
    &rcbr_key_override,
    &lprn_key_override,
    &rprn_key_override,
    &qust_key_override,
    &iexl_key_override,
	NULL // Null terminate the array of overrides!
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {210,228,218}, {210,228,218}, {210,228,218}, {210,228,218}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {210,228,218}, {210,228,218}, {210,228,218}, {210,228,218}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {0,0,0}, {0,0,0}, {210,228,218}, {0,0,0}, {0,0,0}, {139,211,207}, {0,0,0}, {210,228,218}, {210,228,218}, {210,228,218}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {139,211,207}, {0,0,0}, {26,218,204}, {210,228,218}, {41,255,255}, {84,147,178}, {0,0,0}, {0,0,0}, {84,147,178}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {139,211,207}, {139,211,207}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,147,178}, {84,147,178}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {26,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {26,218,204}, {26,218,204}, {26,218,204}, {139,211,207}, {0,0,0}, {0,0,0}, {0,0,0}, {139,211,207}, {139,211,207}, {139,211,207}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

