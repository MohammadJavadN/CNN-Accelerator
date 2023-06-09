#include "lib/cnn.h"
#include "lib/conv2_weights.h"

void cnn(hls::stream<T> &img_in , hls::stream<T> &prediction)
{
#pragma HLS INTERFACE axis port=&img_in
#pragma HLS INTERFACE axis port=&prediction
  T features_conv2 [FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS];
  makeItZero(features_conv2);

/**************** Convolution layer. ****************/
  T features_conv1 [FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS];
  convolutional_layer1(img_in, features_conv1);

/**************** Maxpooling layer1. ****************/
  T pool_features1 [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS];
  max_pooling_layer1(features_conv1, pool_features1);

/**************** Convolution layer. ****************/
  for (int f = 0; f < FILTERS1; f++)
    convolutional_layer2(pool_features1[f], features_conv2, conv2_weights[f]);

/**************** Maxpooling layer2. ****************/
  T pool_features2 [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS];
  max_pooling_layer2(features_conv2, pool_features2, conv2_biases);

/**************** Flatten layer. ********************/
  T flat_array [FLAT_SIZE];
  flattening_layer(pool_features2, flat_array);

/**************** Dense layer. **********************/
  dense_layer(flat_array, prediction);

}
