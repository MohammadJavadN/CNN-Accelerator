#pragma once

#include "definitions.h"
#include <stdio.h>

void
normalization
(
  T img_in  [IMG_ROWS][IMG_COLS],
  T img_out [IMG_ROWS][IMG_COLS]
);
#ifndef __SYNTHESIS__
void
print_img(T img[IMG_ROWS][IMG_COLS]);

void
print_features(T features [FILTERS1][IMG_ROWS][IMG_COLS]);

void
print_pool_features
(
  T pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
);
#endif
