#include "lib/cnn.h"
#include "lib/conv2_weights.h"

void cnn(float img_in [IMG_ROWS][IMG_COLS], float prediction[DIGITS])
{
/**************** Normalization. ********************/
  float norm_img [IMG_ROWS][IMG_COLS] = { 0 };
  normalization(img_in, norm_img);

/**************** Convolution layer. ****************/
  float features_conv1 [FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS] = { 0 };
  convolutional_layer1(norm_img, features_conv1);

/**************** Maxpooling layer1. ****************/
  float pool_features1 [FILTERS1][POOL_IMG1_ROWS][POOL_IMG1_COLS] = { 0 };
  max_pooling_layer1(features_conv1, pool_features1);

/**************** Convolution layer. ****************/
  float features_conv2 [FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS] = { 0 };
  for (int f = 0; f < FILTERS1; f++)
    convolutional_layer2(pool_features1[f], features_conv2, conv2_weights[f]);

/**************** Maxpooling layer2. ****************/
  float pool_features2 [FILTERS2][POOL_IMG2_ROWS][POOL_IMG2_COLS] = { 0 };
  max_pooling_layer2(features_conv2, pool_features2, conv2_biases);

/**************** Flatten layer. ********************/
  float flat_array [FLAT_SIZE] = { 0 };
  flattening_layer(pool_features2, flat_array);

/**************** Dense layer. **********************/
  dense_layer(flat_array, prediction);

}
