#pragma once

#include "definitions.h"
#include "activ_fun.h"
#include <hls_stream.h>

void convolutional_layer1
(
  hls::stream<T> &src,
  T dst[FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS]
);
void convolutional_layer2
(
  T src[POOL_IMG1_ROWS][POOL_IMG1_COLS], 
  T dst[FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS], 
  T weights[FILTERS2][KRN_ROWS2][KRN_COLS2]
);