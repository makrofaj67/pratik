#include <stdio.h>

int main ()

{
    int num;
    printf("please enter the num: \n");
    scanf("%d", &num);

    int count = 1;
    int result = 0;

    for(count = 1; count <= num; count++)
    {
        result = result + count;
    }

    printf("result is; %d", result);

}