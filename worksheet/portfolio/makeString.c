
/*
Name: Yahyaa Umarji
Student ID: 201957821
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

/*• The executable is run with 1-10 command line arguments
• Each argument is 1-4 characters long
• The output is a single string with a ‘-’ character between
each argument*/

   // check no. of arguments to be be between 1 and 10

   if (argc < 2 || argc > 11) {
    printf("Not enough/too many arguments\n");
    return 1;
   }

   // check length of each argument being between 1-4

   for (int i = 1; i < argc; i++) {
    int len = strlen(argv[i]);
    if (len < 1 || len > 4) {
        printf("Not within character range\n");
        return 1;
    }
   }

   // define buffer
   char buffer[100];

   // use strcat to combine all strings

   for (int i = 1; i < argc; i++) {
    strcat(buffer, argv[i]);
    if (i < argc-1) {
        strcat(buffer, "-");
    }
   }



    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}