#include <stdio.h>

int main ()

{
    int year;
    printf("please enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("this is a leap year");
    else if (year % 100 == 0)
        printf("this is NOT a leap year");
    else if (year % 4 == 0)
        printf("this is a leap year");
    else
        printf("this NOT a leap year");
}