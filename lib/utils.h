#pragma once

#include "definitions.h"
#include <stdio.h>
#include <hls_stream.h>

void makeItZero(T A[FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS]);

#ifndef __SYNTHESIS__
void
normalization
(
  T2 img_in  [IMG_ROWS][IMG_COLS],
  T2 img_out [IMG_ROWS][IMG_COLS]
);

void
print_img(T2 img[IMG_ROWS][IMG_COLS]);

void
print_features(T2 features [FILTERS1][IMG_ROWS][IMG_COLS]);

void
print_pool_features
(
  T2 pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
);
#endif
