
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    unsigned long long f[21];

    f[0] = 1;
    for (int i = 1; i < 21; i++) {
      f[i] = i * f[i-1];
    }

    for (int i = 0; i < 21; i++) {
      printf("%2d! = %llu\n", i, f[i]);

    }

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
 }
