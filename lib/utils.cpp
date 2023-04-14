#include "utils.h"

void makeItZero(T A[FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS])
{
  for (int f = 0; f < FILTERS2; f++)
    for(int row = 0; row < FEATURE_CONV2_ROWS; row++) 
      for(int col = 0; col < FEATURE_CONV2_COLS; col++) 
        A[f][row][col] = 0;
}

#ifndef __SYNTHESIS__
void
normalization
(
  T2 img_in  [IMG_ROWS][IMG_COLS],
  T2 img_out [IMG_ROWS][IMG_COLS]
)
{
  for(int r = 0; r < IMG_ROWS; ++r)
    for(int c = 0; c < IMG_COLS; ++c)
    {
        // Normalize.
        img_out[r][c] = img_in[r][c] / 255.0;
    }
}

void
print_img(T2 img[IMG_ROWS][IMG_COLS])
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
print_features(T2 features [FILTERS1][IMG_ROWS][IMG_COLS])
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
  T2 pool_features [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS]
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
