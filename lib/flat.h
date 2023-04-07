#pragma once

#include "definitions.h"

void
flattening_layer
(
  T pool_features [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS],
  T flat_array    [FLAT_SIZE]
);
