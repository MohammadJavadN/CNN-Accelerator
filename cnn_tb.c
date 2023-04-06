#include "lib/cnn.h"
#include "lib/utils.h"

#include <stdio.h>
#include <time.h>

#define N 500

int
read_images (const char * file, float images [N][IMG_ROWS][IMG_COLS])
{
  FILE *fp;

  fp = fopen(file, "r");

  if (fp == NULL)
    return 0;

  for (int i = 0; i < N; ++i)
    for (int x = 0; x < IMG_ROWS; ++x)
      for (int y = 0; y < IMG_COLS; ++y)
        if(fscanf(fp, "%f", & images[i][x][y]) != 1)
          return 0; // Error.
fclose(fp);
  return 0;
}

int
read_labels(const char * file, int labels[N])
{
  FILE *fp;

  fp = fopen(file, "r");

  if (fp == NULL)
    return -1;

  for (int i = 0; i < N; ++i)
    if(fscanf(fp, "%d", & labels[i]) != 1)
      return 1;

  return fclose(fp);
}

int
get_max_prediction (float prediction [DIGITS])
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
  if ((0 == (KRN_ROWS % 2)) || (0 == (KRN_COLS % 2)))
  {
    printf("Error: odd kernel sizes are mandatory for this implementation \n");
    return 1;
  }

  /**** Read the images. ****/
  float images[N][IMG_ROWS][IMG_COLS];/*={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 66, 138, 255, 253, 169, 138, 23, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 120, 228, 252, 252, 253, 252, 252, 252, 158, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 252, 252, 252, 252, 190, 252, 252, 252, 252, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 233, 252, 252, 252, 116, 5, 135, 252, 252, 252, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 43, 178, 253, 252, 221, 43, 2, 0, 5, 54, 232, 252, 210, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 93, 253, 255, 249, 115, 0, 0, 0, 0, 0, 136, 251, 255, 154, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 166, 252, 253, 185, 0, 0, 0, 0, 0, 0, 0, 209, 253, 206, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 19, 220, 252, 253, 92, 0, 0, 0, 0, 0, 0, 0, 116, 253, 206, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 70, 252, 252, 192, 17, 0, 0, 0, 0, 0, 0, 0, 116, 253, 223, 25, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 122, 252, 252, 63, 0, 0, 0, 0, 0, 0, 0, 0, 116, 253, 252, 69, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 132, 253, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 255, 253, 69, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 184, 252, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 253, 252, 69, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 184, 252, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 253, 240, 50, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 184, 252, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 253, 112, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 48, 232, 252, 158, 0, 0, 0, 0, 0, 0, 0, 0, 230, 232, 8, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 93, 253, 244, 50, 0, 0, 0, 0, 0, 0, 155, 253, 168, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 34, 164, 253, 113, 0, 0, 0, 0, 0, 66, 236, 231, 42, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 222, 240, 134, 0, 0, 38, 91, 234, 252, 137, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 177, 240, 207, 103, 233, 252, 252, 176, 35, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 54, 179, 252, 137, 137, 54, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
*/
   if (0 != read_images("in.dat", images))
   {
     printf("Error: can't open file ``../Data/in.dat''\n");
     return 1;
   }

//  /**** Read expected labels. ****/
 int labels[N];//={2};
  if (0 != read_labels("out.dat", labels))
  {
    printf("Error: can't open file ``../Data/out.dat''\n");
    return 1;
  }

 /**** Do N predictions. ****/
 double time = 0;
 int correct_predictions = 0;
 float prediction [DIGITS];
//
 for (int i = 0; i < N; ++i)
 {
   // CNN execution, obtain a prediction.
   clock_t begin = clock();
   cnn(images[i], prediction);
   clock_t end = clock();

   if (get_max_prediction(prediction) == labels[i])
   {
     ++correct_predictions;
   }
   else
   {
     printf("\nExpected: %d\n", labels[i]);
     float pad_img [PAD_IMG_ROWS][PAD_IMG_COLS];
     normalization_and_padding(images[i], pad_img);
     print_pad_img(pad_img);
     printf("Prediction:\n");
     for (int j = 0; j < DIGITS; ++j)
       printf("%d: %f\n", j, prediction[j]);
     printf("\n");
   }

   // Sum up time spent.
   double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
   time += time_spent;
 }

 double
 correct_predictions_perc = (double)correct_predictions * 100.0 / (double)N;
 printf("Total predictions: %d\n", N);
 printf("Correct predictions: %.2f %%\n", correct_predictions_perc);
 printf("Average latency: %f (ms)\n", (time / N) * 1000);

  return 0;
}
