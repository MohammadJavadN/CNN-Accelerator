#include "utils.h"

void
normalization
(
  T img_in  [IMG_ROWS][IMG_COLS],
  T img_out [IMG_ROWS][IMG_COLS]
)
{
  for(int r = 0; r < IMG_ROWS; ++r)
    for(int c = 0; c < IMG_COLS; ++c)
    {
        // Normalize.
        img_out[r][c] = img_in[r][c] / 255.0;
    }
}

#ifndef __SYNTHESIS__

void
print_img(T img[IMG_ROWS][IMG_COLS])
{
  for (int i = 0; i < IMG_ROWS; ++i)
  {
    for (int j = 0; j < IMG_COLS; ++j)
    {
      printf("%.0f", img[i][j]);
    }

    printf("\n");
  }
}


void
print_features(T features [FILTERS1][IMG_ROWS][IMG_COLS])
{
  for (int f = 0; f < FILTERS1; ++f)
  {
    printf("Feature map %d:\n", f);

    for (int r = 0; r < IMG_ROWS; ++r)
    {
      for (int c = 0; c < IMG_COLS; ++c)
      {
        printf("%.0f", features[f][r][c]);
      }
      printf("\n");
    }
  }
}

void
print_pool_features
(
  T pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
)
{
  for (int f = 0; f < FILTERS1; ++f)
  {
    printf("Pool feature map %d:\n", f);
    for (int r = 0; r < POOL_IMG1_ROWS; ++r)
    {
      for (int c = 0; c < POOL_IMG1_COLS; ++c)
      {
        printf("%.0f", pool_features[f][r][c]);
      }
      printf("\n");
    }
  }
}

#endif
