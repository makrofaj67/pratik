#include <stdio.h>

int main ()

{
    int num, count, result, i;
    printf("please enter the num and count\n");
    scanf("%d%d", &num, &count);


    for (i = 1; i <= count; i++)
    {

        result = num * i;
        printf("%d * %d = %d\n", num, i, result);
    }
}