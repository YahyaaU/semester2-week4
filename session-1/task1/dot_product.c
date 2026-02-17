
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5]; // {2.0, 3.0, 4.0, 5.0, 6.0}
    float d;

    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */

    for (int i = 0; i < 5; i++) {
      c[i] = a[i] * b[i];
    }
    for (int i = 0; i < 5; i++) {
    printf("C[%d] = %f\n", i, c[i]);
    }

    for (int i = 0; i < 5; i++) {
      d = d + c[i];
    }

    printf("%f\n", d);
    /*for (int j = 0; j < 5; j++) {
      d = c[j] += c[j];
    }

    printf("%f\n", d);
*/
    return 0;
 }