#include <stdio.h>

int main ()

{
    int numberOfAsterisks;
    printf("please enter the amount of asterisks you want to print: \n");
    scanf("%d", &numberOfAsterisks);

    while (numberOfAsterisks>0)
    {
        printf("*");
        numberOfAsterisks--;
    }
}