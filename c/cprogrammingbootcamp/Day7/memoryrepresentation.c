#include <stdio.h>

void print_binary(int n) {
    if (n > 1) {
        print_binary(n/2);
    }
    printf("%d", n % 2);
}

int main ()

{
    char myChar1 = 'a';
    printf("the following expressions are representing of different ways of memory content of myChar1");
    printf("Character: %c \n", myChar1);
    printf("Character's decimal ASCII code: %d \n", myChar1);
    printf("Character's hexadecimal ASCII code: %X \n", myChar1);
    printf("Character's binary ASCII code: ");
    print_binary(myChar1);
    printf("\n");
    printf("Charachter's octal ASCII code is: %o", myChar1);

    printf("");

    char myChar2 = 'O';
    printf("the following expressions are representing of different ways of memory content of myChar1");
    printf("Character: %c \n", myChar2);
    printf("Character's decimal ASCII code: %d \n", myChar2);
    printf("Character's hexadecimal ASCII code: %X \n", myChar2);
    printf("Character's binary ASCII code: ");
    print_binary(myChar2);
    printf("\n");
    printf("Charachter's octal ASCII code is: %o", myChar2);
    /*
    in memory the stored information is binary type of the ascii value
    this memory content has a memory address too
    */

}


