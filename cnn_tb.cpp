#include "lib/cnn.h"
#include "lib/utils.h"

#include <stdio.h>
#include <time.h>
#include <fstream>
#include <iostream>
using namespace std;

#define N 500
#define TOT 10000
int OFSET = 0;

ifstream fpm; 
ifstream fpl; 

// FILE *fpm;

// FILE *fpl;


int
read_images (const char * file, T2 images [N][IMG_ROWS][IMG_COLS])
{
  // FILE *fp;

  // fp = fopen(file, "r");

  // if (fp == NULL)
  //   return -1;

  for (int i = 0; i <  N; ++i)
    // if (i >= OFSET)
      for (int x = 0; x < IMG_ROWS; ++x)
        for (int y = 0; y < IMG_COLS; ++y)
          fpm>> images[i][x][y];
          // if(fscanf(fpm, "%f ", & images[i][x][y]) != 1)
          //   return 1; // Error.
// fclose(fp);
  return 0;
}

int
read_labels(const char * file, int labels[N])
{
  // FILE *fp;

  // fp = fopen(file, "r");

  // if (fp == NULL)
  //   return -1;

  for (int i = 0; i <  N; ++i)
    fpl>>labels[i];
    // if (i >= OFSET)
      // if(fscanf(fpl, "%d ", & labels[i]) != 1)
      //   return 1;
// fclose(fp);
  return 0;
}

int
get_max_prediction (T prediction [DIGITS])
{
  int max_digit = 0;
  for (int i = 0; i < DIGITS; ++i)
  {
    if (prediction[i] > prediction[max_digit])
      max_digit = i;
  }
  return max_digit;
}

int main ()
{
  /**** Basic parameters check. ****/
  // Enforce odd kernel dimensions.
  if ((0 == (KRN_ROWS1 % 2)) || (0 == (KRN_COLS1 % 2)))
  {
    printf("Error: odd kernel sizes are mandatory for this implementation \n");
    return 1;
  }
  T2 images[N][IMG_ROWS][IMG_COLS];
  hls::stream<T2> src_img_strm("src_img_strm");
  int labels[N];//={2};
  T prediction [DIGITS];
  T2 norm_img [IMG_ROWS][IMG_COLS];

  fpm.open("in.dat");
  fpl.open("out.dat");
// fpm = fopen("in.dat", "r");
// fpl = fopen("out.dat", "r");

double time = 0;
int correct_predictions = 0;
for(OFSET = 0; OFSET < TOT; OFSET+=N){
    /**** Read the images. ****/
    if (0 != read_images("in.dat", images))
    {
      printf("Error: can't open file ``../Data/in.dat''\n");
      return 1;
    }
  //  /**** Read expected labels. ****/
    if (0 != read_labels("out.dat", labels))
    {
      printf("Error: can't open file ``../Data/out.dat''\n");
      return 1;
    }

  /**** Do N predictions. ****/
  //
  for (int i = 0; i < N; ++i)
  {
    for (int ii = 0; ii < IMG_ROWS; ii++)
      for (int jj = 0; jj < IMG_COLS; jj++)
        src_img_strm<<   images[i][ii][jj];    
    
    // CNN execution, obtain a prediction.
    clock_t begin = clock();
    cnn(src_img_strm, prediction);
    clock_t end = clock();

    if (get_max_prediction(prediction) == labels[i])
    {
      ++correct_predictions;
    }
    else
    {
      // printf("\nExpected: %d\n", labels[i]);
      // normalization(images[i], norm_img);
      // print_img(norm_img);
      // printf("Prediction:\n");
      // for (int j = 0; j < DIGITS; ++j)
      //   printf("%d: %f\n", j, (T2)prediction[j]);
      printf("\n false ");
    }
    // Sum up time spent.
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    time += time_spent;
  }
 }

 double
 correct_predictions_perc = (double)correct_predictions * 100.0 / (double)TOT;
 printf("Total predictions: %d\n", TOT);
 printf("Correct predictions: %.2f %%\n", correct_predictions_perc);
 printf("Average latency: %f (ms)\n", (time / TOT) * 1000);

  return 0;
}
