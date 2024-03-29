#include <stdio.h>
#include QMK_KEYBOARD_H

enum sofle_layers {
  _QWERTY,
  _SYMBOLS,
  _NUMBERS,
  _ARROWS,
  _MULTIMEDIA,
  _NUMPAD
};

enum custom_keycodes {
    J_MASL = SAFE_RANGE,
    J_MASR,
    J_HAKL,
    J_HAKR,
    J_PIPE,
    J_BACKSL
};

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * L0
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  +   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   Ö  |  Ä   |
 * |------+------+------+------+------+------| Mute  |    | Play  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |  L3  | LAlt |     | L1   | / L3    /       \ L2   \  | Spc  |  L4  | TG5  | RCSG |
 *            |      |      |      | Enter|/ Bsp   /         \ Esc  \ | RShft|      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_QWERTY] = LAYOUT(
  KC_ESC,    KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,   KC_0,      KC_MINS,
  KC_TAB,    KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,      KC_LBRC,
  KC_LCTL,   KC_A,    KC_S,   KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN,   KC_QUOT,
  KC_LSFT,   KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,  RSG(KC_M),  KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH,   KC_RALT,
        MO(3),  KC_LALT, KC_LGUI, LT(1,KC_ENT),  LT(3,KC_BSPC), LT(2,KC_ESC), RSFT_T(KC_SPC), LT(4,KC_TAB), TG(5), OSM(MOD_RCTL|MOD_RSFT|MOD_RGUI)
),

/*
 * L1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ?  |   +  |   =  |   #  |   _  |                    |   <  |   >  |   [  |   ]  |  ~   | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ´  |   `  |   '  |   "  |   -  |-------.    ,-------|   ^  |   *  |   (  |   )  |  @   |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |  &   |   \  |   |  |   /  |   $  |-------|    |-------|   ;  |   :  |   {  |   }  |  %   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      | LAlt |     |      | /       /       \ Bsp  \  | Del  |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_SYMBOLS] = LAYOUT(
  KC_NO,     KC_F1,         KC_F2,        KC_F3,      KC_F4,      KC_F5,                        KC_F6,         KC_F7,         KC_F8,      KC_F9,      KC_F10,        KC_F11,
  KC_NO,     LSFT(KC_MINS), KC_PPLS,      KC_PEQL,    LSFT(KC_3), LSFT(KC_SLSH),                KC_GRV,        LSFT(KC_GRV),  LALT(KC_8), LALT(KC_9), LALT(KC_RBRC), KC_F12,
  KC_NO,     KC_EQL,        LSFT(KC_EQL), KC_NUHS,    LSFT(KC_2), KC_PMNS,                      LSFT(KC_RBRC), KC_PAST,       LSFT(KC_8), LSFT(KC_9), LALT(KC_2),    KC_NO,
  KC_NO,     LSFT(KC_6),    LSA(KC_7),    LALT(KC_7), LSFT(KC_7), LALT(KC_4),  KC_NO,   KC_NO,  LSFT(KC_COMM), LSFT(KC_DOT),  LSA(KC_8),  LSA(KC_9),  LSFT(KC_5),    KC_NO,
           KC_NO,    KC_LALT,          KC_LGUI,           KC_TRNS, KC_NO,                          KC_BSPC, KC_DEL,     KC_NO,      KC_NO,    KC_NO

//  KC_NO,     KC_F1,   KC_F2,        KC_F3,      KC_F4,         KC_F5,                         KC_F6,         KC_F7,         KC_F8,      KC_F9,      KC_F10,      KC_F11,
//  KC_NO,     KC_PAST, KC_PPLS,      KC_PEQL,    LSFT(KC_SLSH), LSFT(KC_MINS),                 KC_GRV,        LSFT(KC_GRV),  LALT(KC_8), LALT(KC_9), KC_NO,       KC_F12,
//  KC_NO,     KC_EQL,  LSFT(KC_EQL), KC_NUHS,    LSFT(KC_2),    KC_PMNS,                       LSFT(KC_RBRC), LALT(KC_RBRC), LSFT(KC_8), LSFT(KC_9), LALT(KC_2),  KC_NO,
//  KC_NO,     KC_NO,   LSA(KC_7),    LALT(KC_7), LSFT(KC_7),    LALT(KC_4),   KC_NO, KC_NO,    LSFT(KC_COMM), LSFT(KC_DOT),  LSA(KC_8), LSA(KC_9),   KC_NO,       KC_NO,
//    KC_NO, KC_LALT, KC_LGUI, KC_TRNS, KC_NO,                                                    KC_BSPC, KC_DEL, KC_NO, KC_NO, KC_NO
),

/*
 * L2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   !  |   "  |   #  |   €  |   %  |-------|    |-------|   &  |   /  |   (  |   )  |   =  |   ?  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | / Bsp   /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_NUMBERS] = LAYOUT(
  KC_NO,     KC_NO,      KC_NO,        KC_NO,      KC_NO,         KC_NO,                      KC_NO,         KC_NO,         KC_NO,      KC_NO,      KC_NO,       KC_NO,
  KC_NO,     KC_NO,      KC_NO,        KC_NO,      KC_NO,         KC_NO,                      KC_NO,         KC_NO,         KC_NO,      KC_NO,      KC_NO,       KC_NO,
  KC_NO,     KC_1,       KC_2,         KC_3,       KC_4,          KC_5,                       KC_6,          KC_7,          KC_8,       KC_9,       KC_0,        KC_NO,
  KC_NO,     LSFT(KC_1), LSFT(KC_2),   LSFT(KC_3), LSFT(KC_4),    LSFT(KC_5), KC_NO,  KC_NO,  LSFT(KC_6),    LSFT(KC_7),    LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),  LSFT(KC_MINS),
                                        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BSPC,          KC_NO,   KC_TRNS, KC_NO, KC_NO, KC_NO
),

/*
 * L3
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |      |      |prn KT|inc KT|dec KT|                    |      |CSA 2 |CSA 4 |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |                    |      |CSA 1 |CSA 3 |CSA 7 |CSA 9 |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Ctrl |      |      |  ⌘-  |  ⌘+  |      |-------.    ,-------|  <-  | down |  up  |  ->  |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------|    |-------|      |CSA 2 |CSA 0 |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      | Alt  |     |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_ARROWS] = LAYOUT(
  KC_ESC,    KC_NO,   KC_NO,        DT_PRNT,    DT_UP,            DT_DOWN,                       KC_NO,         MEH(KC_2),     MEH(KC_4),  KC_NO,      KC_NO,       KC_NO,
  KC_TAB,    KC_NO,   KC_NO,        KC_NO,      KC_NO,            KC_NO,                         KC_NO,         MEH(KC_1),     MEH(KC_3),  MEH(KC_7),  MEH(KC_9),   KC_NO,
  KC_LCTL,   KC_NO,   KC_NO,        LGUI(KC_SLSH), LGUI(KC_MINS), KC_NO,                         KC_LEFT,       KC_DOWN,       KC_UP,      KC_RGHT,    KC_NO,       KC_NO,
  KC_LSFT,   KC_NO,   KC_NO,        KC_NO,      KC_NO,            KC_NO,    KC_NO,    KC_NO,     MEH(KC_LALT),  MEH(KC_2),     MEH(KC_0),  KC_NO,      KC_NO,       KC_NO,
                                     KC_TRNS, KC_LALT, KC_LGUI, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

/*
 * L4
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |Macc 0|MCli 1| M up |MCli 2|Mwh up|                    |      | Vol- | Mute | Vol+ |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |Macc 2| M <- | M dow| M -> |Mwh do|-------.    ,-------|      |Brig -|      |Brig +|      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | |<-  | Play | ->|  |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_MULTIMEDIA] = LAYOUT(
  KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_NO,         KC_NO,                         KC_NO,         KC_NO,         KC_NO,      KC_NO,      KC_NO,       KC_NO,
  KC_NO,     KC_ACL0, KC_BTN1,      KC_MS_U,    KC_BTN2,       KC_WH_U,                       KC_NO,         KC_VOLD,       KC_MUTE,    KC_VOLU,    KC_NO,       KC_NO,
  KC_NO,     KC_ACL2, KC_MS_L,      KC_MS_D,    KC_MS_R,       KC_WH_D,                       KC_NO,         KC_BRMD,       KC_NO,      KC_BRMU,    KC_NO,       KC_NO,
  KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_NO,         KC_NO,       KC_NO, KC_NO,     KC_NO,         KC_MRWD,       KC_MPLY,    KC_MFFD,    KC_NO,       KC_NO,
                                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO
),

/*
 * L5
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |   =  |   /  |   *  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |   7  |   8  |   9  |   -  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   1  |   2  |   3  |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      | TG0  | / Bsp   /       \ Ent  \  |   0  |   ,  | TRNS |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_NUMPAD] = LAYOUT(
  KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_NO,         KC_NO,                         KC_NO,         KC_NO,         KC_PEQL,    KC_PSLS,    KC_PAST,     KC_NO,
  KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_NO,         KC_NO,                         KC_NO,         KC_P7,         KC_P8,      KC_P9,      KC_PMNS,     KC_NO,
  KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_NO,         KC_NO,                         KC_NO,         KC_P4,         KC_P5,      KC_P6,      KC_PPLS,     KC_NO,
  KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_NO,         KC_NO,       KC_NO, KC_NO,     KC_NO,         KC_P1,         KC_P2,      KC_P3,      KC_PENT,     KC_NO,
    KC_NO, KC_NO, KC_NO, TG(0), KC_BSPC,                                                        KC_PENT, KC_P0, KC_PDOT, KC_TRNS, KC_NO)
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1,KC_ENT):
            return TAPPING_TERM - 70;
        default:
            return TAPPING_TERM;
    }
}



#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_BRMU);
        } else {
            tap_code(KC_BRMD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

#endif

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

char tap_term_str[10];

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("TAP-T"), false);
    sprintf(tap_term_str, "%03d", g_tapping_term);
    oled_write_ln(tap_term_str, false);

    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Qwrt"), false);
            break;
        case _SYMBOLS:
            oled_write_P(PSTR("Symb"), false);
            break;
        case _NUMBERS:
            oled_write_P(PSTR("Nums"), false);
            break;
        case _ARROWS:
            oled_write_P(PSTR("<-->"), false);
            break;
        case _MULTIMEDIA:
            oled_write_P(PSTR("Mult"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("Nump"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif





/*
 * L
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
