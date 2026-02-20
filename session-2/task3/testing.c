#include <stdio.h>

int main() {
    /*int user;

    printf("Enter a number: ");
    scanf("%d", &user);

    printf("This was your number: %d\n", user); */

    char a;
    char b;
    char c;
    char d;

    printf("Enter any 4 characters of the alphabet and I will output them (Separate them with spaces): \n");

    scanf("%c %c %c %c", &a, &b, &c, &d);

    printf("These are the 4 characters you entered: %c, %c, %c and %c\n", a, b, c, d);


    return 0;
}