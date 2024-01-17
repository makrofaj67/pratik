#include <stdio.h>

int main ()

{   
    int number, hundreds, tens, ones, sumOfDigits;
    printf("please enter the number with 3 digits that you want the sum of its digits \n");
    scanf("%d", &number);

    ones = number % 10;
    tens = ((number % 100) - ones) / 10;
    //tens = (number / 10) % 10;
    hundreds = number / 100;

    sumOfDigits = ones + tens + hundreds;

    printf("the sum of the digits is %d", sumOfDigits);
}