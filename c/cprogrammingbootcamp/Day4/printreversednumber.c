#include <stdio.h>

int main ()

{   
    int number, hundreds, tens, ones;
    printf("please enter the number with 3 digits that you want to reverse its digits \n");
    scanf("%d", &number);

    ones = number % 10;
    tens = ((number % 100) - ones) / 10;
    //tens = (number / 10) % 10;
    hundreds = number / 100;

    printf("%d%d%d", ones, tens, hundreds);
}