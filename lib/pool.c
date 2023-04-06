#include "pool.h"
#include "activ_fun.h"
#include <float.h>
#pragma GCC diagnostic ignored "-Wunused-label"
float conv_biases2 [FILTERS2] = { -0.016670143231749535, -0.24741846323013306, -0.8313738703727722, -0.9820187091827393, -0.03780452907085419, 0.011372077278792858, 0.5197127461433411, -0.36152026057243347 };
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
/*
void max_pooling_layer0(T features[FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS],
      T pool_features[FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]){
    int cnt_max = 0, cnt_out = 0, ip = 0, jp = 0;
    char even_i = 1, even_row = 1;
    T row_sum[FILTERS1];
    T col_max[FILTERS1][4];
    for(int i = 0; i < FEATURE_CONV1_ROWS; i++){
        for(int j = 0; j < FEATURE_CONV1_COLS; j++){
            for (int f = 0; f < FILTERS1; f++)
            {
                T tmp = features[f][i][j];
                if(even_i==1)
                    row_sum[f] = tmp;
                else
                {   
                    if(even_row){
                        col_max[f][cnt_max] = (tmp + row_sum[f]);
                    }else
                    {
                        pool_features[f][ip][jp] = (tmp + col_max[f][cnt_max]+ row_sum[f])/4 ;
                        if(f == FILTERS1 - 1){
                            if (jp == POOL_IMG1_COLS - 1)
                            {
                                ip++;
                                jp=0;
                            }else
                              jp++;
                            
                        }
                    }
                }
            }
            if (even_i != 1)
                cnt_max++;
            if (cnt_max>POOL_IMG1_ROWS-1){
                cnt_max = 0;
                even_row = even_row == 1? 0 : 1;
            }
            even_i = even_i== 1? 0 : 1;
        }
    }
}
*/

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
