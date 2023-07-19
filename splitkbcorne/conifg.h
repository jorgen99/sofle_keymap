#pragma once

/*
  https://docs.qmk.fm/#/tap_hold?id=tap-or-hold-decision-modes
*/
// #define PERMISSIVE_HOLD
//#define HOLD_ON_OTHER_KEY_PRESS
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

