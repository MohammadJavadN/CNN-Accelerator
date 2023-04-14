#pragma once

#include "definitions.h"
#include "activ_fun.h"
#include <hls_stream.h>

void
dense_layer
(
  T flat_array  [FLAT_SIZE],
  hls::stream<T> &dense_array 
);
