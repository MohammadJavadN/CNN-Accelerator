#include "dense.h"
#include "dense_weights.h"

void
dense_layer
(
  T flat_array  [FLAT_SIZE],
  T prediction [DENSE_SIZE]
)
{

  T2 w_sum = 0;
  T2 dense_array [DENSE_SIZE] = { 0 };

  for (int d = 0; d < DENSE_SIZE; ++d)
  {
    w_sum = 0;

    for (int f = 0; f < FLAT_SIZE; ++f)
    {
      w_sum +=((T2) (dense_weights[f][d] * flat_array[f]));
    }

    dense_array[d] = w_sum + ((T2) dense_biases[d]);
  }

  soft_max(dense_array, prediction);
}

