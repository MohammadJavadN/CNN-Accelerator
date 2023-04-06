#include "conv.h"
#include "definitions.h"
#include "activ_fun.h"
#include "conv_weights.h"
typedef float T;
/*
void
convolutional_layer0
(
  float pad_img  [PAD_IMG_ROWS][PAD_IMG_COLS],
  float features [FILTERS][IMG_ROWS][IMG_COLS]
)
{
  for (int f = 0; f < FILTERS; ++f)
  {
    float w_sum = 0.0; // Weighted sum.

    for(int r = 0; r < IMG_ROWS; ++r)
    {
      for(int c = 0; c < IMG_COLS; ++c)
        {
          w_sum = 0.0;

          for(int kr = 0; kr < KRN_ROWS; ++kr)
          {
            for(int kc = 0; kc < KRN_COLS; ++kc)
            {
              w_sum += conv_weights[f][kr][kc] * pad_img[r+kr][c+kc];
            }
          }
          features[f][r][c] = relu(w_sum + conv_biases[f]);
        }
    }
  }
}
*/
 void convolutional_layer( // todo: hls::stream<T> -> bool
        T src[PAD_IMG_ROWS][PAD_IMG_COLS], T dst[FILTERS][IMG_ROWS][IMG_COLS])
{
#pragma HLS ARRAY_PARTITION variable=dst dim=1 complete
    // Line-buffers allowing full pixel reuse // todo: T -> bool
    static T linebuf[KRN_ROWS*PAD_IMG_COLS];
    // const int vconv_xlim = PAD_IMG_COLS - (KRN_ROWS - 1); // todo: define number
    // Line-buffer for border pixel replication
#pragma HLS ARRAY_PARTITION variable=linebuf dim=1 complete
#pragma HLS INLINE // Into a DATAFLOW region
    // convolution - consumes each pixel in source image
    T in_val;
    T out_val[FILTERS];
    T win_val;
    conv1:for(int row = 0; row < PAD_IMG_ROWS; row++) {
        conv2:for(int col = 0; col < PAD_IMG_COLS; col++) {
#pragma HLS DEPENDENCE variable=linebuf inter false
#pragma HLS PIPELINE
            in_val = src[row][col];
            conv3:for(int i = 0; i < KRN_ROWS; i++) {
                conv4:for (int j = 0; j < PAD_IMG_COLS; j++)
                {                    
                    win_val = (i < KRN_ROWS - 1 || j < PAD_IMG_COLS - 1) ? linebuf[i*PAD_IMG_COLS + j] : in_val;
                    if (j<KRN_ROWS)
                    {
                        for (int jj = 0; jj < FILTERS; jj++)
                        {
                          if (i==0 && j == 0)
                            out_val[jj] = win_val * conv_weights[jj][i][j];
                          else
                            out_val[jj] += win_val * conv_weights[jj][i][j];
                        }
                    }
                    
                    if (j > 0){
                        linebuf[i*PAD_IMG_COLS + j-1] = win_val;
                    }else if (i>0)
                    {
                        linebuf[i*PAD_IMG_COLS-1] = win_val;
                    }
                }                
            }
            if (row >= KRN_ROWS && col < IMG_COLS){   
              for (int f = 0; f < FILTERS; f++)
              {
                dst[f][row-KRN_ROWS][col] = relu(out_val[f] + conv_biases[f]);
              }
                           
            }
        }
    }
}