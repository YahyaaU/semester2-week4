
#include <stdio.h>

int main( void ) {

    // define suitable data

    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    // program using scan f

    int a;
    int b;
    
    printf("Enter 2 numbers which will be added together in the form a b: \n");
    scanf("%d %d", &a, &b);

    int c = a + b;

    printf("%d + %d = %d\n", a, b, c);

    return 0;
}