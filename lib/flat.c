#include "flat.h"

void
flattening_layer
(
  T pool_features [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS],
  T flat_array    [FLAT_SIZE]
)
{
  int index = 0;

  for(int f = 0; f < FILTERS2; ++f)
    for(int r = 0; r < POOL_IMG2_ROWS; ++r)
      for(int c = 0; c < POOL_IMG2_COLS; ++c)
      {
        flat_array[index] = pool_features[f][r][c];
        ++index;
      }
}
