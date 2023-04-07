#include "pool.h"
#pragma GCC diagnostic ignored "-Wunused-label"

void
max_pool2
(
  float feature      [FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS],
  float pool_feature [POOL_IMG2_ROWS][POOL_IMG2_COLS], float b
)
{
  float pool = 0.0;

  for (int r = 0; r < FEATURE_CONV2_ROWS; r += POOL_ROWS2)
  {
    for(int c = 0; c < FEATURE_CONV2_COLS; c += POOL_COLS2)
    {
      pool = FLT_MIN;

      for (int pr = 0; pr < POOL_ROWS2; ++pr)
        for (int pc = 0; pc < POOL_COLS2; ++pc)
        {
          if(feature[r + pr][c + pc] > pool)
            pool = feature[r + pr][c + pc];
        }

      pool_feature[r / POOL_ROWS2][c / POOL_COLS2] = relu(pool + b);
    }
  }
}

void
max_pool
(
  float feature      [FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS],
  float pool_feature [POOL_IMG1_ROWS][POOL_IMG1_COLS]
)
{
  float pool = 0.0;

  for (int r = 0; r < FEATURE_CONV1_ROWS; r += POOL_ROWS)
  {
    for(int c = 0; c < FEATURE_CONV1_COLS; c += POOL_COLS)
    {
      pool = FLT_MIN;

      for (int pr = 0; pr < POOL_ROWS; ++pr)
        for (int pc = 0; pc < POOL_COLS; ++pc)
        {
          if(feature[r + pr][c + pc] > pool)
            pool = feature[r + pr][c + pc];
        }

      pool_feature[r / POOL_ROWS][c / POOL_COLS] = pool;
    }
  }
}


void
max_pooling_layer1
(
  float features      [FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS],
  float pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
)
{
#pragma HLS INLINE // Into a DATAFLOW region
  for (int f = 0; f < FILTERS1; ++f)
  {
    max_pool(features[f], pool_features[f]);
  }
}
void
max_pooling_layer2
(
  float features      [FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS],
  float pool_features [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS],
  float conv_biases2[FILTERS2]
)
{
#pragma HLS INLINE // Into a DATAFLOW region
  for (int f = 0; f < FILTERS2; ++f)
  {
    max_pool2(features[f], pool_features[f], conv_biases2[f]);
  }
}
