#include QMK_KEYBOARD_H

enum jorgen_layers {
  _QWERTY = 0,
  _SYMBOLS = 1,
  _NUMBERS = 2,
  _ARROWS = 3,
  _MULTIMEDIA = 4,
  _NUMPAD = 5
};

////KEYS
#define L1_ENT LT(1,KC_ENT)
#define L2_ESC LT(2,KC_ESC)
#define L3_BSP LT(3,KC_BSPC)
#define L4_TAB LT(4,KC_TAB)
#define SFT_SPC RSFT_T(KC_SPC)
//#define CSM OSM(MOD_RCTL|MOD_RSFT|MOD_RGUI)

#define SWE_QUES LSFT(KC_MINS)
#define SWE_PLUS KC_MINS
#define SWE_EQL  LSFT(KC_0)
#define SWE_HASH LSFT(KC_3)
#define SWE_UNDS LSFT(KC_SLSH)

#define SWE_LT KC_GRV
#define SWE_GT LSFT(KC_GRV)
#define SWE_LBRC LALT(KC_8)
#define SWE_RBRC LALT(KC_9)
#define SWE_TILD LALT(KC_RBRC)

#define SWE_GRV  KC_EQL
#define SWE_ACT  LSFT(KC_EQL)
#define SWE_QUOT KC_NUHS
#define SWE_DQUO LSFT(KC_2)
#define SWE_MINS KC_SLSH

#define SWE_CIRC LSFT(KC_RBRC)
#define SWE_ASTR LSFT(KC_NUHS)
#define SWE_LPRN LSFT(KC_8)
#define SWE_RPRN LSFT(KC_9)
#define SWE_AT   LALT(KC_2)

#define SWE_AMPR LSFT(KC_6)
#define SWE_BSLS LSA(KC_7)
#define SWE_PIPE LALT(KC_7)
#define SWE_SLSH LSFT(KC_7)
#define SWE_DLR  LALT(KC_4)

#define SWE_SCLN LSFT(KC_COMM)
#define SWE_COLN LSFT(KC_DOT)
#define SWE_LCBR LSA(KC_8)
#define SWE_RCBR LSA(KC_9)
#define SWE_PERC LSFT(KC_5)

#define LSFT1 LSFT(KC_1)
#define LSFT2 LSFT(KC_2)
#define LSFT3 LSFT(KC_3)
#define LSFT4 LSFT(KC_4)
#define LSFT5 LSFT(KC_5)
#define LSFT6 LSFT(KC_6)
#define LSFT7 LSFT(KC_7)
#define LSFT8 LSFT(KC_8)
#define LSFT9 LSFT(KC_9)
#define LSFT0 LSFT(KC_0)

#define CMD_MINS LGUI(KC_SLSH)
#define CMD_PLUS LGUI(KC_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * L0
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  Å   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   Ö  |  Ä   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------.    .-------|   N  |   M  |   ,  |   .  |   -  | Alt  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |     | L1   | / L3    /       \ L2   \  | RShft|  L4  |
 *                          |      | Enter|/ Bsp   /         \ Esc  \ | Spc  |  Tab |
 *                          `--------------------'           '------''--------------'
 */
[_QWERTY] = LAYOUT_split_3x6_3(
  KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,            KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC,
  KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,            KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,            KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LALT,
                     KC_LGUI, L1_ENT, L3_BSP,    L2_ESC, SFT_SPC, L4_TAB
),

/*
 * L1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   ?  |   +  |   =  |   #  |   _  |                    |   <  |   >  |   [  |   ]  |  ~   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ´  |   `  |   '  |   "  |   -  |                    |   ^  |   *  |   (  |   )  |  @   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  &   |   \  |   |  |   /  |   $  |-------.    .-------|   ;  |   :  |   {  |   }  |  %   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |     |      | /       /       \ Bsp  \  | Del  |      |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `--------------------'           '------''--------------'
 */
[_SYMBOLS] = LAYOUT_split_3x6_3(
  _______, SWE_QUES, SWE_PLUS, SWE_EQL,  SWE_HASH, SWE_UNDS,          SWE_LT,   SWE_GT,   SWE_LBRC, SWE_RBRC, SWE_TILD, _______,
  _______, SWE_GRV,  SWE_ACT,  SWE_QUOT, SWE_DQUO, SWE_MINS,          SWE_CIRC, SWE_ASTR, SWE_LPRN, SWE_RPRN, SWE_AT,   _______,
  _______, SWE_AMPR, SWE_BSLS, SWE_PIPE, SWE_SLSH, SWE_DLR,           SWE_SCLN, SWE_COLN, SWE_LCBR, SWE_RCBR, SWE_PERC, _______,
                                     KC_LGUI, _______, _______,   KC_BSPC, KC_DEL,  _______
),

/*
 * L2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   !  |   "  |   #  |   €  |   %  |-------|    |-------|   &  |   /  |   (  |   )  |   =  |   ?  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |      |      | / Bsp   /       \      \  |      |      |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `--------------------'           '------''---------------
 */
[_NUMBERS] = LAYOUT_split_3x6_3(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_F12,
  _______, LSFT1,   LSFT2,   LSFT3,   LSFT4,   LSFT5,                   LSFT6,   LSFT7,   LSFT8,   LSFT9,   LSFT0,  _______,
                                  _______, _______, KC_BSPC,       _______, _______, _______
),

/*
 * L3
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Tab  |      |      |prn KT|inc KT|dec KT|                    |      |CSA 1 |CSA 3 |CSA 7 |CSA 9 |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Ctrl |      |      |  ⌘-  |  ⌘+  |      |                    |  <-  | down |  up  |  ->  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------.    .-------|      |      |CSA 2 |CSA 0 |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |     |      | /       /       \      \  |      |      |
 *                          |      |      |/       /         \      \ |      |      |
 *                          '--------------------'           '------''---------------
 */
[_ARROWS] = LAYOUT_split_3x6_3(
  KC_TAB,  _______, _______, DT_PRNT,  DT_UP,    DT_DOWN,                 _______, MEH(KC_1), MEH(KC_3), MEH(KC_7), MEH(KC_9), _______,
  KC_LCTL, _______, _______, CMD_MINS, CMD_PLUS, _______,                 KC_LEFT, KC_DOWN,   KC_UP,     KC_RGHT,   _______,   _______,
  KC_LSFT, _______, _______, _______,  _______,  _______,                 _______, _______,   MEH(KC_2), MEH(KC_0), _______,   _______,
                                     KC_LGUI, _______, _______,       _______, _______, _______
),

/*
 * L4
1 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |Macc 0|MCli 1| M up |MCli 2|Mwh up|                    |      | Vol- | Mute | Vol+ |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |Macc 2| M <- | M dow| M -> |Mwh do|                    |      |Brig -|      |Brig +|      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    .-------|      | |<-  | Play | ->|  |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |      |      | /       /       \      \  |      |      |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `--------------------'           '------''---------------
 */
[_MULTIMEDIA] = LAYOUT_split_3x6_3(
  _______, KC_ACL0, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,               _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______,
  _______, KC_ACL2, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,               _______, KC_BRMD, _______, KC_BRMU, _______, _______,
  _______, _______, _______, _______, _______, _______,               _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______,
                                  _______, _______, _______,       _______, _______, _______
),

/*
 * L5
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |   7  |   8  |   9  |   -  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   1  |   2  |   3  |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |      | TG0  | / Bsp   /       \ Ent  \  |   0  |   , |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `--------------------'           '------''--------------'
 */
[_NUMPAD] = LAYOUT_split_3x6_3(
  _______, _______, _______, _______, _______, _______,             _______, KC_P7, KC_P8, KC_P9, KC_PMNS, _______,
  _______, _______, _______, _______, _______, _______,             _______, KC_P4, KC_P5, KC_P6, KC_PPLS, _______,
  _______, _______, _______, _______, _______, _______,             _______, KC_P1, KC_P2, KC_P3, KC_PENT, _______,
                                   _______, TG(0), KC_BSPC,     KC_PENT, KC_P0, KC_PDOT
)
};

/*
 * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
 * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
 * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
 * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
 * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
 * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
 * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
 *               ┌───┐                   ┌───┐
 *               │GUI├───┐           ┌───┤Alt│
 *               └───┤   ├───┐   ┌───┤   ├───┘
 *                   └───┤Bsp│   │Ent├───┘
 *                       └───┘   └───┘
 */

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1,KC_ENT):
            return TAPPING_TERM - 70;
        default:
            return TAPPING_TERM;
    }
}

