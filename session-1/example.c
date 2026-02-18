#include <stdio.h> 

int main () {
    
    /*for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);

    }    */
    // counting backwards from 10 to 1
    /*for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }*/

    // counting up in 2s from 2 to 20
    /*for (int i = 2; i <= 20; i += 2) {
        printf("%d\n", i);
    }*/

    // Using loop and if statement, prints numbers divisble by 3 from 1-20
    /*for (int i = 0; i <= 20; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }*/

    // Star Pattern
    /*for (int row = 1; row <=5; row++) {
        for (int column = 1; column <= row; column++) {
            printf("* ");
        }
        printf("\n");*/

    // pyramid of numbers
    /*for (int row = 1; row <= 5; row++) {

        for (int i = 1; i <= row; i++) {
            printf("%d", i);
        }

    printf("\n");
    }*/

    // Full Pyramid
    /*for (int row = 1; row<=5; row++) {

        for (int spaces = 1; spaces <= 5 - row; spaces++) {
        printf(" ");
        }

        for (int num = 1; num <= 2*row - 1; num++) {
            printf("%d", num);
        }
        printf("\n");
    }*/

    // Hollow Square Pattern
    /*for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        }*/
    /*for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }*/

    /*for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }*/

    // Right aligned triangle
    /*for (int i = 1; i <= 5; i++) {

        for (int space = 1; space <= 5 - i; space++) {
            printf(" ");
        }

        for (int num = 1; num <= i; num++) {
            printf("%d", num);
        }

        printf("\n");
    }*/

    // Computing the sum of the first 10 natural numbers
    /*int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("%d\n\n", sum);*/

    /*int numbers[5] = {3, 5, 7, 8, 9};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
printf("%d\n", sum);*/

/*int numbers[6] = {4, 12, 7, 3, 15, 9};
int min = numbers[0];

for (int i = 0; i <= 5; i++) {
    if (numbers[i] < min) {
        min = numbers[i];
    }
}

printf("%d\n", min); */

// program to find the sum, average, min and max in one loop
int numbers[6] = {4, 12, 7, 3, 15, 9};
int sum = 0;
float avg;
int max = numbers[0];
int min = numbers[0];

for (int i = 0; i < 6; i++) {

    sum += numbers[i];
    
    avg = float(sum) / 6.00;
    
    if (numbers[i] > max) {
        max = numbers[i];
    }

    if (numbers[i] < min) {
        min = numbers[i];
    }
}
printf("Sum of array: %d\n", sum);
printf("Average of array: %.2f\n", avg);
printf("Max number in array: %d\n", max);
printf("Min number in array: %d\n", min);




    
    return 0;
}