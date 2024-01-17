#include <stdio.h>

int main ()

{
    int a;
    printf("please enter the amount of asterisks you want to print: \n");
    scanf("%d", &a);

    int loop = 0;

    while (loop < a)
    {
        printf("*");
        loop++;
    }

}