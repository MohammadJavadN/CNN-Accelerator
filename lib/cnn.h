#pragma once

#include "definitions.h"
#include "utils.h"
#include "activ_fun.h"
#include "conv.h"
#include "pool.h"
#include "flat.h"
#include "dense.h"
#include <hls_stream.h>
void cnn
(
  hls::stream<T> &img_in , // Take an image in input.
  hls::stream<T> &pred                 // Get a prediction in output.
);
