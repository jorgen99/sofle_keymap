#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define MASTER_RIGHT


/*
  This makes tap and hold keys (like Layer Tap) work better for fast
  typists, or for high TAPPING_TERM settings.

  If you press a dual-role key, tap another key (press and release)
  and then release the dual-role key, all within the tapping term, by
  default the dual-role key will perform its tap action. If the
  PERMISSIVE_HOLD option is enabled, the dual-role key will perform
  its hold action instead.

  https://docs.qmk.fm/#/tap_hold?id=tap-or-hold-decision-modes
*/
#define PERMISSIVE_HOLD

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

#define TAPPING_TERM_PER_KEY


