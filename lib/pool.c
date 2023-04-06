#include "pool.h"

#include <float.h>
typedef float T;
#pragma GCC diagnostic ignored "-Wunused-label"

void
max_pool
(
  float feature      [IMG_ROWS][IMG_COLS],
  float pool_feature [POOL_IMG_ROWS][POOL_IMG_COLS]
)
{
  float pool = 0.0;

  for (int r = 0; r < IMG_ROWS; r += POOL_ROWS)
  {
    for(int c = 0; c < IMG_COLS; c += POOL_COLS)
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
void max_pooling_layer0(T features[FILTERS][IMG_ROWS][IMG_COLS],
      T pool_features[FILTERS][POOL_IMG_ROWS][POOL_IMG_COLS]){
    int cnt_max = 0, cnt_out = 0, ip = 0, jp = 0;
    char even_i = 1, even_row = 1;
    T row_sum[FILTERS];
    T col_max[FILTERS][4];
    for(int i = 0; i < IMG_ROWS; i++){
        for(int j = 0; j < IMG_COLS; j++){
            for (int f = 0; f < FILTERS; f++)
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
                        if(f == FILTERS - 1){
                            if (jp == POOL_IMG_COLS - 1)
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
            if (cnt_max>POOL_IMG_ROWS-1){
                cnt_max = 0;
                even_row = even_row == 1? 0 : 1;
            }
            even_i = even_i== 1? 0 : 1;
        }
    }
}
*/

void
max_pooling_layer
(
  float features      [FILTERS][IMG_ROWS][IMG_COLS],
  float pool_features [FILTERS][POOL_IMG_ROWS][POOL_IMG_COLS]
)
{
  for (int f = 0; f < FILTERS; ++f)
  {
    max_pool(features[f], pool_features[f]);
  }
}
