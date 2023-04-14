#pragma once

#include "definitions.h"
#include <math.h>
#include <hls_stream.h>

T relu (T x);

void soft_max(T2 dense_array [DIGITS], hls::stream<T> &pred);
