
#include <stdio.h>

int main( void ) {

    // define suitable data

    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    // program using scan f

    /*int a;
    int b;
    
    printf("Enter 2 numbers which will be added together in the form a b: \n");
    scanf("%d %d", &a, &b);

    int c = a + b;

    printf("%d + %d = %d\n", a, b, c);*/

    /*int i, j, k;
    int count = scanf("%d %d %d", &i, &j, &k);

    printf("%d\n", count);*/

    /*char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is: %s\n", name);*/

    
    /*char input[20];
    int age;

    printf("Enter your age: ");
    fgets(input, 20, stdin);

    sscanf(input, "%d", &age);

    printf("Your age is %d\n", age);*/

    char user[20];
    float temp;
    float fahrenheit;

    printf("Enter the temperature in celsius: ");
    fgets(user, 20, stdin);

    sscanf(user, "%f", &temp);

    fahrenheit = (temp * 9/5) + 32;

    printf("This is the temperature in fahrenheit: %.2f\n", fahrenheit);

    return 0;
}