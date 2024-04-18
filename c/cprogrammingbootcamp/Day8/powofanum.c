#include <stdio.h>

int main ()

{
    int num, pow;
    printf("enter the number you want to calculate its power: \n");
    scanf("%d", &num);
    printf("enter the power you want to calculate: \n");
    scanf("%d", &pow);

    int result = 1;
    int loop = 0;

    while (!(loop == pow)) {
        result = result * num;
        loop++;
        printf("this is loop: %d\n", loop);
    }
    printf("this is result: %d\n", result);
}