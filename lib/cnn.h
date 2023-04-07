#pragma once

#include "definitions.h"
#include "utils.h"
#include "activ_fun.h"
#include "conv.h"
#include "pool.h"
#include "flat.h"
#include "dense.h"

void cnn
(
  float img_in [IMG_ROWS][IMG_COLS], // Take an image in input.
  float pred   [DIGITS]              // Get a prediction in output.
);
