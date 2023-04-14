#include "activ_fun.h"
T ZERO = 0;
T relu (T x)
{
  if(x > ZERO)
    return x;
  else
    return ZERO;
}

void soft_max(T2 dense_array [DIGITS], hls::stream<T> &pred)
{
  T2 sum = 0.0;

  for (int i = 0; i < DIGITS; ++i)
  {
    sum += expf((T2)dense_array[i]);
  }

  for (int j = 0; j < DIGITS; ++j)
  {
    pred << ((T) (expf((T2)dense_array[j]) / sum));
  }

}
