#include "conv.h"
#include "conv1_weights.h"

void convolutional_layer1
(
  hls::stream<T> &src,
  T dst[FILTERS1][FEATURE_CONV1_ROWS][FEATURE_CONV1_COLS]
)
{
#pragma HLS ARRAY_PARTITION variable=dst dim=1 complete
            // #ifndef __SYNTHESIS__
            //     printf("\n");
            // #endif
    // Line-buffers allowing full pixel reuse // todo: T -> bool
    static T linebuf[KRN_ROWS1*IMG_COLS];
    // const int vconv_xlim = IMG_COLS - (KRN_ROWS1 - 1); // todo: define number
    // Line-buffer for border pixel replication
#pragma HLS ARRAY_PARTITION variable=linebuf dim=1 complete
#pragma HLS INLINE // Into a DATAFLOW region
    // convolution - consumes each pixel in source image
    T in_val;
    T out_val[FILTERS1];
    T win_val;
    conv1:for(int row = 0; row < IMG_ROWS; row++) {
        conv2:for(int col = 0; col < IMG_COLS; col++) {
#pragma HLS DEPENDENCE variable=linebuf inter false
#pragma HLS PIPELINE
            in_val = src.read();
            conv3:for(int i = 0; i < KRN_ROWS1; i++) {
                conv4:for (int j = 0; j < IMG_COLS; j++)
                {                    
                    win_val = (i < KRN_ROWS1 - 1 || j < IMG_COLS - 1) ? linebuf[i*IMG_COLS + j] : in_val;
                    if (j>=IMG_COLS-KRN_COLS1)
                    {
                        for (int f = 0; f < FILTERS1; f++)
                        {
                          if (i==0 && j == (IMG_COLS-KRN_COLS1))
                            out_val[f] = win_val * conv1_weights[f][i][j-(IMG_COLS-KRN_COLS1)];
                          else
                            out_val[f] += win_val * conv1_weights[f][i][j-(IMG_COLS-KRN_COLS1)];
                        }
                    }
                    
                    if (j > 0 || i>0){
                        linebuf[i*IMG_COLS + j-1] = win_val;
                    }/*else if (i>0)
                    {
                        linebuf[i*IMG_COLS-1] = win_val;
                    }*/
                }                
            }
            if (row >= KRN_ROWS1-1 && col >= KRN_COLS1-1){   
              for (int f = 0; f < FILTERS1; f++)
              {
            // #ifndef __SYNTHESIS__
            // if(f==0 && col == 0)
            //     printf("%f, ", dst[f][row-(KRN_ROWS1-1)][col - (KRN_COLS1-1)]);
            // #endif
                dst[f][row-(KRN_ROWS1-1)][col - (KRN_COLS1-1)] = relu(out_val[f] + conv1_biases[f]);
              }               
            }
        }
    }
}

void convolutional_layer2
(
  T src[POOL_IMG1_ROWS][POOL_IMG1_COLS], 
  T dst[FILTERS2][FEATURE_CONV2_ROWS][FEATURE_CONV2_COLS], 
  T weights[FILTERS2][KRN_ROWS2][KRN_COLS2]
)
{
            // #ifndef __SYNTHESIS__
            //     printf("\n");
            // #endif
#pragma HLS ARRAY_PARTITION variable=dst dim=1 complete
    // Line-buffers allowing full pixel reuse // todo: T -> bool
    static T linebuf[KRN_ROWS2*POOL_IMG1_COLS];
    // const int vconv_xlim = POOL_IMG1_COLS - (KRN_ROWS2 - 1); // todo: define number
    // Line-buffer for border pixel replication
#pragma HLS ARRAY_PARTITION variable=linebuf dim=1 complete
#pragma HLS INLINE // Into a DATAFLOW region
    // convolution - consumes each pixel in source image
    T in_val;
    T out_val[FILTERS2];
    T win_val;
    conv1:for(int row = 0; row < POOL_IMG1_ROWS; row++) {
        conv2:for(int col = 0; col < POOL_IMG1_COLS; col++) {
#pragma HLS DEPENDENCE variable=linebuf inter false
#pragma HLS PIPELINE
            in_val = src[row][col];
            conv3:for(int i = 0; i < KRN_ROWS2; i++) {
                conv4:for (int j = 0; j < POOL_IMG1_COLS; j++)
                {                    
                    win_val = (i < KRN_ROWS2 - 1 || j < POOL_IMG1_COLS - 1) ? linebuf[i*POOL_IMG1_COLS + j] : in_val;
                    if (j>=POOL_IMG1_COLS-KRN_COLS2)
                    {
                        for (int f = 0; f < FILTERS2; f++)
                        {
                          if (i==0 && j == (POOL_IMG1_COLS-KRN_COLS2))
                            out_val[f] = win_val * weights[f][i][j-(POOL_IMG1_COLS-KRN_COLS2)];
                          else
                            out_val[f] += win_val * weights[f][i][j-(POOL_IMG1_COLS-KRN_COLS2)];
                        }
                    }
                    
                    if (j > 0 || i>0){
                        linebuf[i*POOL_IMG1_COLS + j-1] = win_val;
                    }/*else if (i>0)
                    {
                        linebuf[i*POOL_IMG1_COLS-1] = win_val;
                    }*/
                }                
            }
            if (row >= KRN_ROWS2-1 && col >= KRN_COLS2-1){   
              for (int f = 0; f < FILTERS2; f++)
              {
            // #ifndef __SYNTHESIS__
            // if(f==0 && col == KRN_COLS2-1)
            //     printf("%f, ", dst[f][row-(KRN_ROWS2-1)][col - ( KRN_COLS2-1)]);
            // #endif
                dst[f][row-(KRN_ROWS2-1)][col - ( KRN_COLS2-1)] += out_val[f];
              }             
            }
        }
    }
}