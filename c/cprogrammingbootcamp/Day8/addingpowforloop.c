#include <stdio.h>

int main ()

{
    int num, pow;
    printf("please enter the number you want to calculate its pow: \n");
    scanf("%d", &num);
    printf("please enter the power you want: \n");
    scanf("%d", &pow);

    int result = 1;
    //printf("initializad result is: %d\n", result); //when an integer is not initialized its value will be 0

    for (pow; pow != 0; pow--)
    {
        //printf("result is: %d, pow is: %d\n", result, pow);
        result = result * num;
        //printf("%d\n", result);
    }

    printf("result is = %d", result);
}