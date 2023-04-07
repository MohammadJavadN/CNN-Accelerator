#pragma once

#include "definitions.h"
#include <stdio.h>

void
normalization
(
  float img_in  [IMG_ROWS][IMG_COLS],
  float img_out [IMG_ROWS][IMG_COLS]
);
#ifndef __SYNTHESIS__
void
print_img(float img[IMG_ROWS][IMG_COLS]);

void
print_features(float features [FILTERS1][IMG_ROWS][IMG_COLS]);

void
print_pool_features
(
  float pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
);
#endif
