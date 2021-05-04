/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 250

#undef RGB_MATRIX_HUE_STEP
#define RGB_MATRIX_HUE_STEP 6

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 9

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 30

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 5

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 4

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 10

#define CAPS_LOCK_STATUS
#define RGB_MATRIX_STARTUP_SPD 60
