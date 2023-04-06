#pragma once

#include "definitions.h"

void
flattening_layer
(
  float pool_features [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS],
  float flat_array    [FLAT_SIZE]
);
