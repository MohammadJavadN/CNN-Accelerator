#pragma once

#include "definitions.h"
#include "activ_fun.h"
#include <float.h>

void
max_pooling_layer1
(
  float features      [FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS],
  float pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
);
void
max_pooling_layer2
(
  float features      [FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS],
  float pool_features [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS],
  float conv_biases2[FILTERS2]
);