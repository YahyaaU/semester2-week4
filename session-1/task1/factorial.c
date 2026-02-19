
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    /*unsigned long long f[21];

    f[0] = 1;
    for (int i = 1; i < 21; i++) {
      f[i] = i * f[i-1];
    }

    for (int i = 0; i < 21; i++) {
      printf("%2d! = %llu\n", i, f[i]);

    }*/

    unsigned long long factorial[21]; // [1,1,2,6,24,120,720...]
    factorial[0] = 1;

    for (int i = 1; i < 21; i++) {
      factorial[i] = i * factorial[i-1]; // 6 = 3 * 2
    }

    for (int i = 0; i < 21; i++) {
      printf("%2d = %llu\n", i, factorial[i]);
    }

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
 }
