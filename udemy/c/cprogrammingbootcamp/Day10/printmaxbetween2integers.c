#include <stdio.h>

void printMinMax (int num1, int num2)

{
    if (num1 > num2)
    {
        printf("max is %d", num1);
        printf("min is %d", num2);
    }
    else
    {
        printf("max is %d", num2);
        printf("min is %d", num1);
    }
}


int main ()

{
    int a, b;
    printf("please enter 2 numbers: \n");
    scanf("%d%d", &a, &b);
    printMinMax(a, b);
    return 0;
}