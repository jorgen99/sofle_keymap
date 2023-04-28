#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define MASTER_RIGHT


/*
  https://docs.qmk.fm/#/tap_hold?id=tap-or-hold-decision-modes
*/
// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

