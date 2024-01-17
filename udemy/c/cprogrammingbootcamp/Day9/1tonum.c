#include <stdio.h>

int main ()

{
    int num;
    printf("please enter the num: \n");
    scanf("%d", &num);

    int count = 1;

    for(count = 1; count <= num; count++)
    {
        printf("%d", count);
    }

    printf("\n");

    for(count = num; count >= 1; count--)
    {
        printf("%d", count);
    }
}