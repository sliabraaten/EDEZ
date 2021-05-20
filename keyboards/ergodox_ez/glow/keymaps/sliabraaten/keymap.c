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
#define MAC_OPT KC_RGUI
#define MAC_CTRL KC_LCTRL
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
  M_GEQ,
  M_COLNEQU,
  M_COLEQU_0,
  M_COLEQU_1,
  M_EX_REM_FILL,
  M_EX_PST_WDT,
  M_EX_PST_WDT,
  M_EX_PST_FORM,
  M_EX_PST_VAL,
  M_EX_SH_COL,
  M_EX_SH_ROW,
  M_EX_INS_COL,
  M_EX_INS_ROW,
  M_EX_INS_CMNT,
  M_EX_SEL_COL,
  M_EX_DEL_COL,
  M_EX_DEL_ROW,
  M_RSS_UPLD_PLC,
  M_RSS_DWNLD_PLC,
  M_RSS_PLC_PGRM,
  M_RSS_PLC_RUN,
  M_RSS_CLOSE_TAB,
  M_RSS_XIO,
  M_RSS_PLC_RUN,
  M_RSS_ONS,
  M_RSS_LBL,
  M_RSS_JMP,
  M_RSS_BRCH_LVL,
  M_RSS_VFY_CONT,
  ST_MACRO_35,
  M_RSS_COP,
  M_RSS_OTE,
  M_RSS_NOP,
  M_RSS_TOF,
  M_RSS_VFY_CONT,
  M_RSS_JSR,
  M_RSS_CMP,
  M_RSS_OTL,
  M_RSS_OTU,
  M_RSS_RTO,
  M_RSS_WIN_MAN,
  M_RSS_SEL,
  M_RSS_ROT,
  M_RSS_VERT_SPACE,
  M_RSS_COLOR_ANIM,
  M_FTV_BRNG_FRNT,
  M_FTV_ALGN_TOP,
  ST_MACRO_53,
  M_FTV_ZOOM_IN,
  M_FTV_HORZ_SPACE,
  M_FTV_ALGN_LFT,
  M_FTV_ALGN_CTR,
  M_FTV_ALGN_RIGHT,
  M_FTV_ALGN_MID,
  M_FTV_FLIP_HORZ,
  M_FTV_EDIT_PARAM,
  M_FTV_SND_TO_BK,
  M_FTV_ALGN_BTTM,
  M_FTV_FLIP_VERT,
  M_FTV_ZOOM_OUT,
  M_FTV_GBL_PARAM,
  M_FTV_FLIP_1,
  M_FTV_FLIP_0,
};

//TODO: ADD ROW COMMENTS TO KEYMAPS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    //BASE LAYER
    KC_GRAVE,                KC_1,                    KC_2,                    KC_3,                    KC_4,                    KC_5,               KC_F5,           /*|*/   RESET,                   KC_6,                         KC_7,                         KC_8,                         KC_9,                         KC_0,                         KC_BSPACE,
    KC_TAB,                  KC_QUOTE,                KC_COMMA,                KC_DOT,                  KC_P,                    KC_Y,               KC_ESCAPE,       /*|*/   KC_INSERT,               KC_F,                         KC_G,                         KC_C,                         KC_R,                         KC_L,                         KC_EQUAL,
    LCTL_T(KC_CAPSLOCK),     KC_A,                    KC_O,                    KC_E,                    KC_U,                    KC_I,                                /*|*/                            KC_D,                         KC_H,                         KC_T,                         KC_N,                         KC_S,                         KC_MINUS,
    KC_LALT,                 KC_SCOLON,               KC_Q,                    KC_J,                    KC_K,                    KC_X,               KC_PSCREEN,      /*|*/   LSFT(KC_RALT),           KC_B,                         KC_M,                         KC_W,                         KC_V,                         KC_Z,                         KC_SLASH,
    LSFT(KC_LCTRL),          LT(6,KC_NO),             LT(2,KC_NO),             LT(9,KC_NO),             LT(5,KC_ENTER),                                               /*|*/                                                          LT(2,KC_SPACE),               LT(8,KC_END),                 LT(10,KC_NO),                 TT(1),                        KC_BSLASH,
                                                                                                                                 KC_LGUI,            KC_PC_CUT,       /*|*/   LALT(KC_F4),             LALT(LCTL(KC_DELETE)),
                                                                                                                                                     KC_PC_COPY,      /*|*/   LCTL(KC_PGUP),
                                                                                                        KC_LSHIFT,               KC_DELETE,          KC_PC_PASTE,     /*|*/   LCTL(KC_PGDOWN),         KC_RGUI,                      LT(4,KC_HOME)
  ),
  [1] = LAYOUT_ergodox_pretty(
    //APPLE BASE LAYER
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     LGUI(KC_R),      /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    LCTL_T(KC_TAB),          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    LCMD_T(KC_CAPSLOCK),     KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                      /*|*/                            KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_LALT,                 KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     LGUI(LSFT(KC_O)),/*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    MAC_OPT(KC_MAC_CMD(8)),  LT(6,KC_NO),             LT(2,KC_NO),             LT(9,KC_NO),             LT(5,KC_ENTER),                                               /*|*/                                                          LT(2,KC_SPACE),               LT(8,KC_END),                 LT(11,KC_NO),                 TO(0),                        KC_TRANSPARENT,
                                                                                                                                 LGUI(KC_SPACE),     KC_MAC_CUT,      /*|*/   LCMD(KC_W),              LALT(LGUI(KC_ESCAPE)),
                                                                                                                                                     KC_MAC_COPY,     /*|*/   LCMD(KC_PGUP),
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,     KC_MAC_PASTE,    /*|*/   LCMD(KC_PGDOWN),         KC_LCTRL,LT(4,KC_HOME)
  ),
  [2] = LAYOUT_ergodox_pretty(
    //MOVEMENT LAYER
    TO(12),                  KC_F1,                   KC_F2,                   KC_F3,                   KC_F4,                   KC_F5,              KC_F6,           /*|*/   KC_F7,                   KC_F8,                        KC_F9,                        KC_F10,                       KC_F11,                       KC_F12,                       LALT(KC_UP),
    LALT(LCTL(LSFT(KC_A))),  KC_MS_WH_UP,             KC_MS_BTN1,              KC_MS_UP,                KC_MS_BTN2,              KC_PGUP,            M_CBKTS,         /*|*/   M_SQUOTES,               KC_AUDIO_VOL_UP,              LCTL(LGUI(KC_LEFT)),          LGUI(LSFT(KC_LEFT)),          LGUI(LSFT(KC_RIGHT)),         LCTL(LGUI(KC_RIGHT)),         LSFT(KC_END),
    KC_LCTRL,                KC_MS_WH_DOWN,           KC_MS_LEFT,              KC_MS_DOWN,              KC_MS_RIGHT,             KC_PGDOWN,                           /*|*/                            KC_AUDIO_VOL_DOWN,            KC_LEFT,                      KC_DOWN,                      KC_UP,                        KC_RIGHT,                     LCTL(LSFT(KC_RIGHT)),
    M_PARENS,                KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     M_SBKTS,         /*|*/   M_DQUOTES,               KC_AUDIO_MUTE,                LGUI(KC_LEFT),                LGUI(KC_DOWN),                LGUI(KC_UP),                  LGUI(KC_RIGHT),               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          OSL(3),                  LT(10,KC_NO),                                                 /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               LALT(LGUI(KC_LEFT)),          LALT(LGUI(KC_RIGHT)),         TO(0),
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_HASH,            KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               LCTL(LSFT(KC_M))
  ),
  [3] = LAYOUT_ergodox_pretty(
    //MACRO LAYER
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    M_LEQ,                   KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    M_GEQ,                   KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                      /*|*/                            KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    M_COLNEQU,               M_COLEQU_0,              M_COLEQU_1,              KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    //EXCEL LAYER
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               M_EX_SH_COL,                  M_EX_SH_ROW,                  KC_TRANSPARENT,               KC_TRANSPARENT,               LALT(KC_LEFT),
    KC_TRANSPARENT,          KC_F7,                   KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          LCTL(LSFT(KC_7)),   M_EX_REM_FILL,   /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               M_EX_INS_COL,                 M_EX_INS_ROW,                 M_EX_INS_CMNT,                KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          LCTL(LSFT(KC_MINUS)),                /*|*/                            KC_TRANSPARENT,               LCTL(KC_SPACE),               LSFT(KC_SPACE),               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          M_EX_PST_WDT,            M_EX_PST_WDT,            M_EX_PST_FORM,           M_EX_PST_VAL,       KC_ESCAPE,       /*|*/   M_EX_SEL_COL,            KC_TRANSPARENT,               M_EX_DEL_COL,                 M_EX_DEL_ROW,                 KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          LCTL(KC_0),                   LCTL(KC_9),                   KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        LALT(LSFT(KC_F1)),       KC_TRANSPARENT,     LALT(LCTL(KC_V)),/*|*/   KC_TRANSPARENT,          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    //NUMPAD LAYER
    TO(7),                   KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_NUMLOCK,              KC_TRANSPARENT,               KC_BSLASH,                    KC_ASTR,                      KC_SLASH,                     KC_MINUS,                     KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_BSPACE,               KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_CALCULATOR,           KC_AUDIO_VOL_UP,              KC_7,                         KC_8,                         KC_9,                         KC_MINUS,                     KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_LEFT,                 KC_UP,                   KC_DOWN,                 KC_RIGHT,                KC_TRANSPARENT,                      /*|*/                            KC_AUDIO_VOL_DOWN,            KC_4,                         KC_5,                         KC_6,                         KC_KP_PLUS,                   LCTL(LSFT(KC_END)),
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_KP_ENTER,             KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_AUDIO_MUTE,                KC_1,                         KC_2,                         KC_3,                         KC_KP_PLUS,                   KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_0,                         KC_ENTER,                     KC_KP_DOT,                    KC_COLN,                      TO(0),
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_MY_COMPUTER
  ),
  [6] = LAYOUT_ergodox_pretty(
    //LIGHTING LAYER
    KC_TRANSPARENT,          HSV_172_255_255,         HSV_86_255_128,          HSV_27_255_255,          HSV_215_255_128,         HSV_0_255_255,      KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          HSV_120_24_255,               HSV_0_24_255,                 HSV_44_72_255,                KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          RGB_TOG,                 RGB_MOD,                 RGB_VAI,                 RGB_SLD,            KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          RGB_HUI,                 RGB_HUD,                 RGB_VAD,                 KC_TRANSPARENT,                      /*|*/                            KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               TO(0),
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    //QWERTY LAYER
    KC_GRAVE,                KC_1,                    KC_2,                    KC_3,                    KC_4,                    KC_5,               KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_6,                         KC_7,                         KC_8,                         KC_9,                         KC_0,                         KC_BSPACE,
    KC_TRANSPARENT,          KC_Q,                    KC_W,                    KC_E,                    KC_R,                    KC_T,               KC_TRANSPARENT,  /*|*/   KC_ESCAPE,               KC_Y,                         KC_U,                         KC_I,                         KC_O,                         KC_P,                         KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_A,                    KC_S,                    KC_D,                    KC_F,                    KC_G,                                /*|*/                            KC_H,                         KC_J,                         KC_K,                         KC_L,                         KC_SCOLON,                    KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_Z,                    KC_X,                    KC_C,                    KC_V,                    KC_B,               KC_LBRACKET,     /*|*/   KC_RBRACKET,             KC_N,                         KC_M,                         KC_COMMA,                     KC_DOT,                       KC_SLASH,                     KC_RSPC,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               TO(0),
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    //ROCKWELL STUDIO LADDER LAYER
    M_RSS_UPLD_PLC,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    M_RSS_DWNLD_PLC,         LCTL(LSFT(KC_F)),        KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     LCTL(KC_F4),     /*|*/   M_RSS_VFY_CONT,          KC_TRANSPARENT,               KC_TRANSPARENT,               LCTL(KC_E),                   LCTL(KC_R),                   KC_TRANSPARENT,               ST_MACRO_35,
    M_RSS_PLC_PGRM,          LCTL(LSFT(KC_S)),        KC_TRANSPARENT,          M_RSS_PLC_RUN,           M_RSS_CLOSE_TAB,         M_RSS_XIO,                           /*|*/                            M_RSS_COP,                    M_RSS_OTE,                    KC_TRANSPARENT,               M_RSS_NOP,                    KC_TRANSPARENT,               M_RSS_TOF,
    M_RSS_PLC_RUN,           KC_TRANSPARENT,          M_RSS_ONS,               M_RSS_LBL,               M_RSS_JMP,               M_RSS_BRCH_LVL,     LCTL(KC_D),      /*|*/   M_RSS_VFY_CONT,          M_RSS_JSR,                    M_RSS_CMP,                    M_RSS_OTL,                    M_RSS_OTU,                    KC_TRANSPARENT,               M_RSS_RTO,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        LCTL(LSFT(KC_TAB)),      LCTL(KC_TAB),       KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    //FACTORYTALK VIEW STUDIO LAYER
    M_RSS_WIN_MAN,           M_RSS_SEL,               M_RSS_ROT,               KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    M_RSS_VERT_SPACE,        KC_TRANSPARENT,          M_RSS_COLOR_ANIM,        M_FTV_BRNG_FRNT,         M_FTV_ALGN_TOP,          ST_MACRO_53,        M_FTV_ZOOM_IN,   /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    M_FTV_HORZ_SPACE,        M_FTV_ALGN_LFT,          M_FTV_ALGN_CTR,          M_FTV_ALGN_RIGHT,        M_FTV_ALGN_MID,          M_FTV_FLIP_HORZ,                     /*|*/                            KC_TRANSPARENT,               M_FTV_FLIP_1,                 M_FTV_FLIP_0,                 KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    LCTL(KC_R),              M_FTV_EDIT_PARAM,        KC_TRANSPARENT,          M_FTV_SND_TO_BK,         M_FTV_ALGN_BTTM,         M_FTV_FLIP_VERT,    M_FTV_ZOOM_OUT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               LCTL(KC_F4),
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        M_FTV_GBL_PARAM,         KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          LCTL(LSFT(KC_F6)),            LCTL(KC_F6)
  ),
  [10] = LAYOUT_ergodox_pretty(
    //WINDOWS WINDOW MANAGMENT LAYER
    LCTL(LGUI(KC_ENTER)),    KC_TRANSPARENT,                    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,          KC_TRANSPARENT,                    LALT(LGUI(KC_M)),/*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          LALT(LCTL(LGUI(LSFT(KC_EQUAL)))),  LGUI(KC_HOME),      LGUI(KC_UP),        LGUI(KC_PGUP),           LALT(LCTL(LGUI(LSFT(KC_UP)))),     LGUI(KC_ENTER),  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,          LGUI(KC_HOME),      LGUI(KC_UP),                  LGUI(KC_PGUP),                KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          LALT(LCTL(LGUI(LSFT(KC_LEFT)))),   LGUI(KC_LEFT),      LCTL(LGUI(KC_C)),   LGUI(KC_RIGHT),          LALT(LCTL(LGUI(LSFT(KC_RIGHT)))),                   /*|*/                            KC_TRANSPARENT,          LGUI(KC_LEFT),      KC_TRANSPARENT,               LGUI(KC_RIGHT),               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          LALT(LCTL(LGUI(LSFT(KC_MINUS)))),  LGUI(KC_END),       LGUI(KC_DOWN),      LGUI(KC_PGDOWN),         LALT(LCTL(LGUI(LSFT(KC_DOWN)))),   LGUI(KC_DELETE), /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,          LGUI(KC_END),       LGUI(KC_DOWN),                LGUI(KC_PGDOWN),              KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,                    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                              /*|*/                                                     KC_TRANSPARENT,     KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,                    KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                                    KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,                    KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT
  ),
  [11] = LAYOUT_ergodox_pretty(
    //APPLE WINDOW MANAGMENT LAYER
    KC_TRANSPARENT,     KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     LALT(LCTL(LSFT(KC_UP))), /*|*/     KC_TRANSPARENT,     LALT(LCTL(KC_F5)),            LALT(LCTL(KC_F6)),                 LALT(LCTL(KC_F7)),                 LALT(LCTL(KC_F8)),            LALT(LCTL(KC_F9)),                 KC_TRANSPARENT,
    KC_TRANSPARENT,     LALT(LCTL(KC_RBRACKET)), LALT(LCTL(KC_F1)),  LCTL(KC_UP),        LALT(LCTL(KC_F2)),  KC_TRANSPARENT,     LALT(LCTL(KC_ENTER)),    /*|*/     KC_TRANSPARENT,     KC_TRANSPARENT,               LALT(LCTL(KC_F10)),                LALT(LCTL(KC_F11)),                LALT(LCTL(KC_F12)),           LALT(LCTL(LGUI(KC_F1))),           KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,          LCTL(KC_LEFT),      LALT(LCTL(KC_J)),   LCTL(KC_RIGHT),     KC_TRANSPARENT,                              /*|*/                         KC_TRANSPARENT,               LALT(LCTL(LGUI(LSFT(KC_LEFT)))),   LALT(LCTL(LGUI(LSFT(KC_DOWN)))),   LALT(LCTL(LGUI(LSFT(KC_UP)))),LALT(LCTL(LGUI(LSFT(KC_RIGHT)))),  KC_TRANSPARENT,
    KC_TRANSPARENT,     LALT(LCTL(KC_LBRACKET)), LALT(LCTL(KC_F3)),  LCTL(KC_DOWN),      LALT(LCTL(KC_F4)),  KC_TRANSPARENT,     KC_TRANSPARENT,          /*|*/     KC_TRANSPARENT,     LALT(LCTL(LGUI(KC_F2))),      LALT(LCTL(LGUI(KC_F3))),           LALT(LCTL(LGUI(KC_F4))),           LALT(LCTL(LGUI(KC_F5))),      LALT(LCTL(LGUI(KC_F6))),           LALT(LCTL(LGUI(KC_F7))),
    KC_TRANSPARENT,     KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                  /*|*/                                                       KC_TRANSPARENT,                    KC_TRANSPARENT,                    KC_TRANSPARENT,               KC_TRANSPARENT,                    KC_TRANSPARENT,
                                                                                                             KC_TRANSPARENT,     KC_TRANSPARENT,          /*|*/     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,          /*|*/     KC_TRANSPARENT,
                                                                                         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,          /*|*/     KC_TRANSPARENT,     KC_TRANSPARENT,               KC_TRANSPARENT
  ),
  [12] = LAYOUT_ergodox_pretty(
    //GAME LAYER 1
    KC_CAPSLOCK,             KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_F11,          /*|*/   TO(0),                   KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   LALT(LCTL(LSFT(KC_A))),  KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_LCTRL,                KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                      /*|*/                            KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_ENTER,
    KC_LALT,                 KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,     KC_F10,          /*|*/   KC_F9,                   KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_MS_BTN1,
    KC_F3,                   KC_F4,                   KC_F5,                   KC_F6,                   KC_HOME,                                                      /*|*/                                                          KC_SPACE,                     KC_END,                       KC_F13,                       KC_F12,                       KC_TRANSPARENT,
                                                                                                                                 KC_F12,             KC_F9,           /*|*/   KC_F14,                  KC_TRANSPARENT,
                                                                                                                                                     KC_F7,           /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          LT(13,KC_DELETE),   KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT
  ),
  [13] = LAYOUT_ergodox_pretty(
    //GAME LAYER 2
    KC_TRANSPARENT,          KC_6,                    KC_7,                    KC_8,                    KC_9,                    KC_0,               KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_F,                    KC_G,                    KC_C,                    KC_R,                    KC_L,               KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_D,                    KC_H,                    KC_T,                    KC_N,                    KC_S,                                /*|*/                            KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_M,                    KC_W,                    KC_W,                    KC_V,                    KC_Z,               KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,                                               /*|*/                                                          KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,               KC_TRANSPARENT,
                                                                                                                                 KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT,          KC_TRANSPARENT,     KC_TRANSPARENT,  /*|*/   KC_TRANSPARENT,          KC_TRANSPARENT,               KC_TRANSPARENT
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

// TODO: FORMAT KEYMAP COLORS TO COLUMNS AND ROWS
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
    //TEXT MACRO TO PRODUCE CURLY BRACKETS EX: {}
    case M_CBKTS:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(100) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(10) SS_TAP(X_LEFT)); }
    break;
    //TEXT MACRO TO PRODUCE ROUND BRACKETS EX: ()
    case M_PARENS:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(100) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_LEFT)); }
    break;
    //TEXT MACRO TO PRODUCE SQUARE BRACKETS EX: []
    case M_SBKTS:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(100) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_TAP(X_LEFT)); }
    break;
    //TEXT MACRO TO PRODUCE SET OF SINGLE QUOTES EX:'  '
    case M_SQUOTES:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_QUOTE) SS_DELAY(10) SS_TAP(X_LEFT)); }
    break;
    //TEXT MACRO TO PRODUCE SET OF DOUBLE QUOTES EX: " "
    case M_DQUOTES:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(10) SS_TAP(X_LEFT)); }
    break;
    //TEXT MACRO TO PRODUCE INSERT EQUALS EX: <=
    case M_LEQ:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(10) SS_TAP(X_SPACE)); }
    break;
    //TEXT MACRO TO PRODUCE SEND EQUALS EX: =>
    case M_GEQ:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(10) SS_TAP(X_SPACE)); }
    break;
    //TEXT MACRO TO PRODUCE COLON EQUALS EX: :=
    case M_COLNEQU:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(10) SS_TAP(X_SPACE)); }
    break;
    //TEXT MACRO TO PRODUCE COLON EQUALS 0 EX: := 0;
    case M_COLEQU_0:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_SCOLON)); }
    break;
    //TEXT MACRO TO PRODUCE COLON EQUALS 1 EX: := 1;
    case M_COLEQU_1:
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_SCOLON)); }
    break;
    //EXCEL MACRO TO REMOVE FILL FROM SELECTED CELLS
    case M_EX_REM_FILL:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_N)); }
    break;
    //EXCEL MACRO TO PASTE ONLY COLUMN  WIDTH TO SELECTED CELLS
    case M_EX_PST_WDT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_W)); }
    break;
    //EXCEL MACRO TO PASTE ONLY ROW HEIGHT TO SELECTED CELLS
    case M_EX_PST_HGHT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_N)); }
    break;
    //EXCEL MACRO TO PASTE ONLY FORMULA TO SELECTED CELLS
    case M_EX_PST_FORM:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_T)); }
    break;
    //EXCEL MACRO T O PASTE ONLY VALUES TO SELECTED CELLS
    case M_EX_PST_VAL:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_V))) SS_DELAY(100) SS_TAP(X_V)); }
    break;
    //EXCEL MACRO TO SHOW SELECTED COLUMNS
    case M_EX_SH_COL:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    //EXCEL MACRO TO SHOW SELECTED ROWS
    case M_EX_SH_ROW:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    //EXCEL MACRO TO NSERT COLUMN
    case M_EX_INS_COL:
    if (record->event.pressed) { SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_EQUAL)))); }
    break;
    //EXCEL MACRO TO INSERT ROW
    case M_EX_INS_ROW :
    if (record->event.pressed) { SEND_STRING(SS_LSFT(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_EQUAL)))); }
    break;
    //EXCEL MACRO TO INSERT COMMENT TO SELECTED CELL
    case M_EX_INS_CMNT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_R)) SS_DELAY(100) SS_TAP(X_M)); }
    break;
    //EXCEL MACRO OPEN SELECTION IN A NEW TAB IN EXCEL
    case M_EX_SEL_COL:
    if (record->event.pressed) { SEND_STRING(SS_LCTL(SS_TAP(X_C)) SS_DELAY(100) SS_LCTL(SS_TAP(X_T)) SS_DELAY(100) SS_LCTL(SS_TAP(X_V)) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //EXCEL MACRO TO DELETE COLUMN OF CURRENTLY SELECTED CELL(S)
    case M_EX_DEL_COL:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    //EXCEL MACRO TO DELETE ROW OF CURRENTRLY SELECTED CELL(S)
    case M_EX_DEL_ROW:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_H)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    //STUDIO 5000 MACRO TO UPLOAD PROGRAM FROM PLC
    case M_RSS_UPLD_PLC:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_U)); }
    break;
    //STUDIO 5000 MACRO TO DOWNLOAD PROGRAM FROM PLC
    case M_RSS_DWNLD_PLC:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_D)); }
    break;
    //STUDIO 5000 CHANGE ONLINE CONTROLLER TO PROGRAM MODE
    case M_RSS_PLC_PGRM:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    //STUDIO 5000 CREATE EXAMINE IF CLOSED LADDER LOGIC
    case M_RSS_XIC:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    //STUDIO 5000 CREATE EXAMINE IF OPEN LADDER LOGIC
    case M_RSS_XIO:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    //STUDIO 5000 INSERT BRANCH
    case M_RSS_BRANCH:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_INSERT) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 CHANGE ONLINE CONTROLLER TO RUN MODE
    case M_RSS_PLC_RUN:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    //STUDIO 5000 CREATE ONESHOT IN LADDER LOGIC
    case M_RSS_ONS:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_S)); }
    break;
    //STUDIO 5000 CREATE LABEL IN LADDER LOGIC
    case M_RSS_LBL:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    //STUDIO 5000 CREATE JUMP IN LADDER LOGIC
    case M_RSS_JMP:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    //STUDIO 5000 INSERT NEW BRANCH LEVEL IN LADDER LOGIC
    case M_RSS_BRCH_LVL:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_INSERT) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 VERIFY ROUTINE
    case M_RSS_VFY_ROUT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_L)) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    //STUDIO 5000 CREATE TIMER ON DELAY IN LADDER LOGIC
    case M_RSS_TON:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 CREATE COPY TIMER IN LADDER LOGIC
    case M_RSS_COP:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    //STUDIO 5000 CREATE OUTPUT ENERGIZE IN LADDER LOGIC
    case M_RSS_OTE:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 CREATE NO-OPERATIVE LINE IN LADDER LOGIC
    case M_RSS_NOP:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 CREATE TIMER OFF DELAY IN LADDER LOGIC
    case M_RSS_TOF:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 VERIFY CONTROLLER
    case M_RSS_VFY_CONT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_L)) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    //STUDIO 5000 CREATE JUMP TO SUBROUTINE IN LADDER LOGIC
    case M_RSS_JSR:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 CREATE COMPARE STATEMENT  IN LADDER LOGIC
    case M_RSS_CMP:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_P)); }
    break;
    //STUDIO 5000 CREATE OUTPUT LATCH IN LADDER LOGIC
    case M_RSS_OTL:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    //STUDIO  5000 CREATE OUTPUT UNLATCH IN LADDER LOGIC
    case M_RSS_OTU:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_U)); }
    break;
    //STUDIO 5000 CREATE RTO
    case M_RSS_RTO:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    //FACTORYTALK VIEW SE OPEN WINDOW MANAGER
    case M_RSS_WIN_MAN:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_W)) SS_DELAY(100) SS_TAP(X_M)); }
    break;
    //FACTORYTALK VIEW SE SELECT ITEM
    case M_RSS_SEL:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_O)) SS_DELAY(100) SS_TAP(X_S)); }
    break;
    //FACTORTALK VIEW SE OPEN ROTATE MENU
    case M_RSS_ROT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_O)) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    //FACTORYTALK VIEW SE SPACE SELECTED ITEMS VERTICALLY
    case M_RSS_VERT_SPACE:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_V)); }
    break;
    //FACTORYTALK VIEW SE OPEN COLOR ANIMATION MENU
    case M_RSS_COLOR_ANIM:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_N)) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    //FACTORYTALK VIEW SE BRING SELECTED TO FRONT
    case M_FTV_BRNG_FRNT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_F)); }
    break;
    //FACTORYTALK VIEW SE ALIGN TOP EDGE OF SELECTED OBJECTS
    case M_FTV_ALGN_TOP:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_T)); }
    break;
    //FACTORYTALK VIEW SE ALIGN SELECTED OBJECTS TO GRID
    case M_FTV_ALGN_GRID:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_N)); }
    break;
    //FACTORYTALK VIEW SE ZOOM IN
    case M_FTV_ZOOM_IN:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_V)) SS_DELAY(100) SS_TAP(X_I)); }
    break;
    //FACTORYTALK VIEW SE SPACE SELECTED ITEMS HORIZONTALLY
    case M_FTV_HORZ_SPACE:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_H)); }
    break;
    //FACTORYTALK VIEW SE ALIGN LEFT EDGE OF SELECTED OBJECTS
    case M_FTV_ALGN_LFT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_L)); }
    break;
    //FACTORYTALK VIEW SE ALIGN CENTERS OF SELECTED OBJECTS
    case M_FTV_ALGN_CTR:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_C)); }
    break;
    //FACTORYTALK VIEW SE ALIGN RIGHT EDGE OF SELECTED OBJECTS
    case M_FTV_ALGN_RIGHT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_R)); }
    break;
    //FACTORYTALK VIEW SE ALIGN MIDDLES OF SELECTED OBJECTS
    case M_FTV_ALGN_MID:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_M)); }
    break;
    //FACTORY TALK VIEW SE FLIP SELECTED OBJECT OVER CENTER HORIZONTAL AXIS
    case M_FTV_FLIP_HORZ:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    //FACTORYTALK VIEW SE EDIT GLOBAL OBJECT PARAMETER VALUES
    case M_FTV_EDIT_PARAM:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SEND_STRING(SS_TAP(X_UP)  SS_DELAY(100) SS_TAP(X_ENTER); }
    break;
    //FACTORYTALK VIEW SE SEND SELECTED OBJECT TO BACK
    case M_FTV_SND_TO_BK:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_S)); }
    break;
    //FACTORYTALK VIEW SE ALIGN BOTTOM EDGE OF SELECTED OBJECTS
    case M_FTV_ALGN_BTTM:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_B)); }
    break;
    //FACTORYTALK VIEW SE FLIP SELECTED OBJECT OVER CENTER VERTICAL AXIS
    case M_FTV_FLIP_VERT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_E)); }
    break;
    //FACTORYTALK VIEW SE ZOOM OUT
    case M_FTV_ZOOM_OUT:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_V)) SS_DELAY(100) SS_TAP(X_O)); }
    break;
    //FACTORYTALK VIEW SE EDIT GLOBAL PARAMETER SETTINGS OF SELECTED OBJECT
    case M_FTV_GBL_PARAM:
    if (record->event.pressed) { SEND_STRING(SS_LALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN)); }
    break;
    //STUDIO 5000 FLIP A SINGLE BIT TO A '1' IN TAG EDITOR
    case M_FTV_FLIP_1:
    if (record->event.pressed) { SEND_STRING(SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_ENTER)); }
    break;
    //STUDIO 5000 FLIP A SINGLE BIT TO A '0' IN TAG EDITOR
    case M_FTV_FLIP_0:
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

