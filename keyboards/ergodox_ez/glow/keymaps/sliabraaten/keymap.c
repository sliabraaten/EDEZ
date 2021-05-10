	#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_MAC_OPTION KC_RGUI
#define KC_MAC_CTRL KC_LCTRL
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
  HSV_215_255_128,
  HSV_0_255_255,
  HSV_120_24_255,
  HSV_0_24_255,
  HSV_44_72_255,
  M_CBKTS,
  M_PARENS,
  M_SBKTS,
  M_SQUOTES,
  M_DQUOTES,
  M_LEQ,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
  ST_MACRO_41,
  ST_MACRO_42,
  ST_MACRO_43,
  ST_MACRO_44,
  ST_MACRO_45,
  ST_MACRO_46,
  ST_MACRO_47,
  ST_MACRO_48,
  ST_MACRO_49,
  ST_MACRO_50,
  ST_MACRO_51,
  ST_MACRO_52,
  ST_MACRO_53,
  ST_MACRO_54,
  ST_MACRO_55,
  ST_MACRO_56,
  ST_MACRO_57,
  ST_MACRO_58,
  ST_MACRO_59,
  ST_MACRO_60,
  ST_MACRO_61,
  ST_MACRO_62,
  ST_MACRO_63,
  ST_MACRO_64,
  ST_MACRO_65,
  ST_MACRO_66,
  ST_MACRO_67,
  ST_MACRO_68,
  ST_MACRO_69,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    //BASE LAYER
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_F5,                                          RESET,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_ESCAPE,                                      KC_INSERT,      KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_EQUAL,
    LCTL_T(KC_CAPSLOCK),KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,
    KC_LALT,        KC_SCOLON,      KC_Q,           KC_J,           KC_K,           KC_X,           KC_PSCREEN,                                     LSFT(KC_RALT),  KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_SLASH,
    LSFT(KC_LCTRL), LT(6,KC_NO),    LT(2,KC_NO),    LT(9,KC_NO),    LT(5,KC_ENTER),                                                                                                 LT(2,KC_SPACE), LT(8,KC_END),   LT(10,KC_NO),   TT(1),          KC_BSLASH,
                                                                                                    KC_LGUI,        KC_PC_CUT,      LALT(KC_F4),    LALT(LCTL(KC_DELETE)),
                                                                                                                    KC_PC_COPY,     LCTL(KC_PGUP),
                                                                                    KC_LSHIFT,      KC_DELETE,      KC_PC_PASTE,    LCTL(KC_PGDOWN),KC_RGUI,        LT(4,KC_HOME)
  ),
  [1] = LAYOUT_ergodox_pretty(
    //APPLE BASE LAYER
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_R),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LCTL_T(KC_TAB), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LCMD_T(KC_CAPSLOCK),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_O)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LT(6,KC_NO),    LT(2,KC_NO),    LT(9,KC_NO),    LT(5,KC_ENTER),                                                                                                 LT(2,KC_SPACE), LT(8,KC_END),   LT(11,KC_NO),   TO(0),          KC_TRANSPARENT,
                                                                                                    LGUI(KC_SPACE), KC_MAC_CUT,     LCMD(KC_W),     LALT(LGUI(KC_ESCAPE)),
                                                                                                                    KC_MAC_COPY,    LCMD(KC_PGUP),
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_MAC_PASTE,   LCMD(KC_PGDOWN),KC_LCTRL,       LT(4,KC_HOME)
  ),
  [2] = LAYOUT_ergodox_pretty(
    //MOVEMENT LAYER
    TO(12),         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         LALT(KC_UP),
    LALT(LCTL(LSFT(KC_A))),KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_PGUP,        M_CBKTS,                                     M_SQUOTES,     KC_AUDIO_VOL_UP,LCTL(LGUI(KC_LEFT)),LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_RIGHT)),LCTL(LGUI(KC_RIGHT)),LSFT(KC_END),
    KC_LCTRL,       KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_PGDOWN,                                                                      KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LCTL(LSFT(KC_RIGHT)),
    M_PARENS,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, M_SBKTS,                                     M_DQUOTES,     KC_AUDIO_MUTE,  LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(3),         LT(10,KC_NO),                                                                                                   KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_HASH,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_M))
  ),
  [3] = LAYOUT_ergodox_pretty(
    //MACRO LAYER
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    M_LEQ,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    //EXCEL LAYER
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_15,    ST_MACRO_16,    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_LEFT),
    KC_TRANSPARENT, KC_F7,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_7)),ST_MACRO_10,                                    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_MINUS)),                                                                KC_TRANSPARENT, LCTL(KC_SPACE), LSFT(KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    KC_ESCAPE,                                      ST_MACRO_20,    KC_TRANSPARENT, ST_MACRO_21,    ST_MACRO_22,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LCTL(KC_0),     LCTL(KC_9),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LSFT(KC_F1)),KC_TRANSPARENT, LALT(LCTL(KC_V)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    //NUMPAD LAYER
    TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NUMLOCK,     KC_TRANSPARENT, KC_BSLASH,      KC_ASTR,        KC_SLASH,       KC_MINUS,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_CALCULATOR,  KC_AUDIO_VOL_UP,KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_AUDIO_VOL_DOWN,KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     LCTL(LSFT(KC_END)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_ENTER,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_1,           KC_2,           KC_3,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_ENTER,       KC_KP_DOT,      KC_COLN,        TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MY_COMPUTER
  ),
  [6] = LAYOUT_ergodox_pretty(
    //LIGHTING LAYER
    KC_TRANSPARENT, HSV_172_255_255,HSV_86_255_128, HSV_27_255_255, HSV_215_255_128,HSV_0_255_255,  KC_TRANSPARENT,                                 KC_TRANSPARENT, HSV_120_24_255, HSV_0_24_255,   HSV_44_72_255,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,        RGB_MOD,        RGB_VAI,        RGB_SLD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI,        RGB_HUD,        RGB_VAD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    //QWERTY LAYER
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_ESCAPE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_LBRACKET,                                    KC_RBRACKET,    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSPC,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    //ROCKWELL STUDIO LADDER LAYER
    ST_MACRO_23,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_24,    LCTL(LSFT(KC_F)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_F4),                                    ST_MACRO_34,    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_E),     LCTL(KC_R),     KC_TRANSPARENT, ST_MACRO_35,
    ST_MACRO_25,    LCTL(LSFT(KC_S)),KC_TRANSPARENT, ST_MACRO_26,    ST_MACRO_27,    ST_MACRO_28,                                                                    ST_MACRO_36,    ST_MACRO_37,    KC_TRANSPARENT, ST_MACRO_38,    KC_TRANSPARENT, ST_MACRO_39,
    ST_MACRO_29,    KC_TRANSPARENT, ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    ST_MACRO_33,    LCTL(KC_D),                                     ST_MACRO_40,    ST_MACRO_41,    ST_MACRO_42,    ST_MACRO_43,    ST_MACRO_44,    KC_TRANSPARENT, ST_MACRO_45,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    //FACTORYTALK VIEW STUDIO LAYER
    ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_49,    KC_TRANSPARENT, ST_MACRO_50,    ST_MACRO_51,    ST_MACRO_52,    ST_MACRO_53,    ST_MACRO_54,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_55,    ST_MACRO_56,    ST_MACRO_57,    ST_MACRO_58,    ST_MACRO_59,    ST_MACRO_60,                                                                    KC_TRANSPARENT, ST_MACRO_68,    ST_MACRO_69,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LCTL(KC_R),     ST_MACRO_61,    ST_MACRO_62,    ST_MACRO_63,    ST_MACRO_64,    ST_MACRO_65,    ST_MACRO_66,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_F4),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    ST_MACRO_67,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_F6)),LCTL(KC_F6)
  ),
  [10] = LAYOUT_ergodox_pretty(
    //WINDOWS WINDOW MANAGMENT LAYER
    LCTL(LGUI(KC_ENTER)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_M)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_EQUAL)))),LGUI(KC_HOME),  LGUI(KC_UP),    LGUI(KC_PGUP),  LALT(LCTL(LGUI(LSFT(KC_UP)))),LGUI(KC_ENTER),                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_HOME),  LGUI(KC_UP),    LGUI(KC_PGUP),  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_LEFT)))),LGUI(KC_LEFT),  LCTL(LGUI(KC_C)),LGUI(KC_RIGHT), LALT(LCTL(LGUI(LSFT(KC_RIGHT)))),                                                                KC_TRANSPARENT, LGUI(KC_LEFT),  KC_TRANSPARENT, LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_MINUS)))),LGUI(KC_END),   LGUI(KC_DOWN),  LGUI(KC_PGDOWN),LALT(LCTL(LGUI(LSFT(KC_DOWN)))),LGUI(KC_DELETE),                                KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_END),   LGUI(KC_DOWN),  LGUI(KC_PGDOWN),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_ergodox_pretty(
    //APPLE WINDOW MANAGMENT LAYER
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_UP))),                                KC_TRANSPARENT, LALT(LCTL(KC_F5)),LALT(LCTL(KC_F6)),LALT(LCTL(KC_F7)),LALT(LCTL(KC_F8)),LALT(LCTL(KC_F9)),KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(KC_RBRACKET)),LALT(LCTL(KC_F1)),LCTL(KC_UP),    LALT(LCTL(KC_F2)),KC_TRANSPARENT, LALT(LCTL(KC_ENTER)),                                KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_F10)),LALT(LCTL(KC_F11)),LALT(LCTL(KC_F12)),LALT(LCTL(LGUI(KC_F1))),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  LALT(LCTL(KC_J)),LCTL(KC_RIGHT), KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_LEFT)))),LALT(LCTL(LGUI(LSFT(KC_DOWN)))),LALT(LCTL(LGUI(LSFT(KC_UP)))),LALT(LCTL(LGUI(LSFT(KC_RIGHT)))),KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(KC_LBRACKET)),LALT(LCTL(KC_F3)),LCTL(KC_DOWN),  LALT(LCTL(KC_F4)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(LGUI(KC_F2))),LALT(LCTL(LGUI(KC_F3))),LALT(LCTL(LGUI(KC_F4))),LALT(LCTL(LGUI(KC_F5))),LALT(LCTL(LGUI(KC_F6))),LALT(LCTL(LGUI(KC_F7))),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_ergodox_pretty(
    //GAME LAYER 1
    KC_CAPSLOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                                         TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LCTL(LSFT(KC_A))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,
    KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,                                         KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,
    KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_HOME,                                                                                                        KC_SPACE,       KC_END,         KC_F13,         KC_F12,         KC_TRANSPARENT,
                                                                                                    KC_F12,         KC_F9,          KC_F14,         KC_TRANSPARENT,
                                                                                                                    KC_F7,          KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, LT(13,KC_DELETE),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_ergodox_pretty(
    //GAME LAYER 2
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_D,           KC_H,           KC_T,           KC_N,           KC_S,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_M,           KC_W,           KC_W,           KC_V,           KC_Z,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {129,20,255}, {129,20,255}, {129,20,255}, {129,20,255}, {129,20,255}, {131,255,255}, {31,255,255}, {97,224,235}, {97,224,235}, {31,255,255}, {131,255,255}, {255,255,255}, {255,255,255}, {255,255,255}, {255,255,255}, {131,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,20,255}, {129,20,255}, {129,20,255}, {0,0,255}, {0,0,255}, {50,255,255}, {195,61,255}, {255,255,255}, {195,61,255}, {180,255,233}, {50,255,255}, {255,255,255}, {255,255,255}, {255,255,255}, {180,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {141,255,233}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255} },

    [4] = { {0,0,0}, {146,224,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {146,224,255}, {0,204,255}, {32,255,234}, {0,0,0}, {0,0,0}, {146,224,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {146,224,255}, {0,204,255}, {0,0,0}, {0,0,0}, {146,224,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {31,255,255}, {255,220,201}, {255,220,201}, {255,220,201}, {134,255,213}, {84,255,255}, {84,255,255}, {84,255,255}, {255,220,201}, {134,255,213}, {84,255,255}, {84,255,255}, {84,255,255}, {255,220,201}, {134,255,213}, {84,255,255}, {84,255,255}, {84,255,255}, {255,220,201}, {84,255,255}, {14,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {120,24,255}, {0,24,255}, {44,72,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {215,255,128}, {27,255,255}, {86,255,128}, {172,255,255}, {0,255,255}, {86,246,235}, {172,255,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,130}, {27,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244}, {45,255,244} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,205,155}, {0,205,155}, {0,0,0}, {31,255,255}, {146,224,255}, {0,0,0}, {180,255,233}, {0,0,0}, {252,119,255}, {31,255,255}, {254,198,190}, {254,198,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {50,153,244}, {255,220,201}, {255,220,201}, {0,0,0}, {154,86,255}, {50,153,244}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {14,255,255}, {0,205,155}, {105,255,255}, {154,255,255}, {0,0,0}, {35,255,255}, {0,205,155}, {0,205,155}, {0,205,155}, {0,205,155}, {35,255,255}, {0,205,155}, {105,255,255}, {243,222,234}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {254,198,190}, {32,255,234}, {32,255,234}, {32,255,234}, {134,255,213}, {85,203,158}, {32,255,234}, {146,224,255}, {32,255,234}, {85,203,158}, {254,198,190}, {32,255,234}, {32,255,234}, {32,255,234}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {255,255,255}, {255,255,255}, {255,255,255}, {255,255,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,255,234}, {32,255,234}, {32,255,234}, {134,255,213}, {0,0,0}, {32,255,234}, {154,255,255}, {32,255,234}, {0,0,0}, {0,0,0}, {32,255,234}, {32,255,234}, {32,255,234}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  	//TODO: REMOVE DELAY FROM MOUSEMOVE STEPS
    case M_CBKTS:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(100) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(100) SS_TAP(X_LEFT)); }
    break;
    case M_PARENS:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(100) SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_LEFT)); }
    break;
    case M_SBKTS:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(100) SS_TAP(X_RBRACKET) SS_DELAY(100) SS_TAP(X_LEFT)); }
    break;
    case M_SQUOTES:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_LEFT)); }
    break;
    case M_DQUOTES:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_LEFT)); }
    break;
    case M_LEQ:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE)); }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE)); }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE)); }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_SCOLON)); }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_SCOLON)); }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_N)); }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_W)); }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_N)); }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_T)); }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_V)); }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) { SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_EQUAL)))); }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_EQUAL)))); }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_R)) SS_DELAY(100) SS_TAP(X_M)); }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) { SEND_STRING(SS_LCTL(SS_TAP(X_C)) SS_DELAY(100) SS_LCTL(SS_TAP(X_T)) SS_DELAY(100) SS_LCTL(SS_TAP(X_V)) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_U)); }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_D)); }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_INSERT) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_S)); }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_INSERT) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_L)) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_L)) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_U)); }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_W)) SS_DELAY(100) SS_TAP(X_M)); }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_O)) SS_DELAY(100) SS_TAP(X_S)); }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_O)) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_V)); }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_N)) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_F)); }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_T)); }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_N)); }
    break;
    case ST_MACRO_54:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_V)) SS_DELAY(100) SS_TAP(X_I)); }
    break;
    case ST_MACRO_55:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_H)); }
    break;
    case ST_MACRO_56:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    case ST_MACRO_57:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    case ST_MACRO_58:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    case ST_MACRO_59:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_M)); }
    break;
    case ST_MACRO_60:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    case ST_MACRO_61:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP)); }
    break;
    case ST_MACRO_62:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_UP)  SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_63:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_S)); }
    break;
    case ST_MACRO_64:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_B)); }
    break;
    case ST_MACRO_65:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_E)); }
    break;
    case ST_MACRO_66:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_V)) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    case ST_MACRO_67:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN)); }
    break;
    case ST_MACRO_68:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    case ST_MACRO_69:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
      
      
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(27,255,255);
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,128);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_120_24_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(120,24,255);
      }
      return false;
    case HSV_0_24_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,24,255);
      }
      return false;
    case HSV_44_72_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(44,72,255);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

