#pragma once

#include "ap_fixed.h"
typedef ap_fixed<15, 6> T;
typedef float T2;

#define DIGITS 10

#define IMG_ROWS 28
#define IMG_COLS 28
#define IMG_SIZE (IMG_ROWS * IMG_COLS)

// Convolutional layer1.
#define KRN_ROWS1	5
#define KRN_COLS1	5
#define FILTERS1	6
#define FEATURE_CONV1_ROWS (IMG_ROWS - (KRN_ROWS1 - 1))
#define FEATURE_CONV1_COLS (IMG_COLS - (KRN_COLS1 - 1))

// Pool layer1.
#define POOL_ROWS	2
#define POOL_COLS	2
#define POOL_IMG1_ROWS (FEATURE_CONV1_ROWS / POOL_ROWS)
#define POOL_IMG1_COLS (FEATURE_CONV1_COLS / POOL_COLS)

// Convolutional layer2.
#define KRN_ROWS2	5
#define KRN_COLS2	5
#define FILTERS2	10
#define FEATURE_CONV2_ROWS (POOL_IMG1_ROWS - (KRN_ROWS2 - 1))
#define FEATURE_CONV2_COLS (POOL_IMG1_COLS - (KRN_COLS2 - 1))

// Pool layer2.
#define POOL_ROWS2	2
#define POOL_COLS2	2
#define POOL_IMG2_ROWS (FEATURE_CONV2_ROWS / POOL_ROWS2)
#define POOL_IMG2_COLS (FEATURE_CONV2_COLS / POOL_COLS2)

// Fatten layer.
#define FLAT_SIZE (FILTERS2 * POOL_IMG2_ROWS * POOL_IMG2_COLS)

// Dense layers.
#define DENSE_SIZE 10
