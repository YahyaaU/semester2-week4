
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4]; // 0 1 2 3      *     1 2 3 4 a[0][0] * b[0] + a[0][1] * b[0] etc store in c[0]
                   // 2 3 4 5
                   // 6 7 8 9
    float b[4];
    float c[4];

    // Initialise matrix a

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         a[i][j] = 1;
      }
    }

    // Initialise vector b

    for (int j = 0; j < 4; j++) {
      b[j] = 1;
    }

    //Compute matrix-vector product

    for (int i = 0; i < 4; i++) {
      c[i] = 0;
      for (int j = 0; j < 4; j++) {
         c[i] += (a[i][j] * b[j]);
      }
    }

    // printing it

    for (int i = 0; i < 4; i++) {
      printf("C[%d] = %.2f\n", i, c[i]);
    }

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    return 0;
 }
