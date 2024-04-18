#include <stdio.h>

int main ()

{
    int a, result;
    printf("please enter the number you want its absolute value\n");
    scanf("%d", &a);

    if (a < 0)
        result = a * -1;
    else if (a = 0)
        result = 0;
    else
        result = a;

    printf("absolute value is %d", result);

    
}