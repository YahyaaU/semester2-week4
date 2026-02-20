
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value
    int cmp = strcmp(str1, str2);

    printf("Comparing %s with %s: \n", str1, str2);
    printf("strcmp returns %d\n\n", cmp);

    // use 'strcat' to concatenate 2 strings - print the resulting string

    strcat(str1, str2);

    printf("New string: %s\n", str1);

    // use 'strcpy' to copy a string into str3 - print string 3 (MAKE SURE THERE IS ENOUGH SPACE, MAKE THE STRING SIZE BIGGER IF NEEDED)

    printf("Before string copy: str3 = %s\n", str3);
    strcpy(str3, str2); // copies the contents of str2 into str3
    printf("After strcopy: str3 = %s\n", str3);

    return 0;
}
