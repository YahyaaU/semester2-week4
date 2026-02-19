
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */

    // set all the entries in matrices of a and b to 1
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         a[i][j] = b[i][j] = 1;

      c[i][j] = a[i][j] + b[i][j];

      // printf("C[%d][%d] = %f\n", i, j, c[i][j]);
      
      printf("%.2f ", c[i][j]);
      }
      printf("\n");
    }


    return 0;
 }
