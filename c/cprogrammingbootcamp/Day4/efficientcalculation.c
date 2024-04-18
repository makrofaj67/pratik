#include <stdio.h>

int main ()

{   
    int number, x2, x4, x6, x8;
    printf("please enter the number: \n");
    scanf("%d", &number);
    x2 = number * number;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;

    printf("%d %d %d %d", x2, x4, x6, x8);
}