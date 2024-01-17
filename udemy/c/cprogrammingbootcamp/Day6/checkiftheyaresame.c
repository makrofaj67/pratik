#include <stdio.h>

int main ()

{
    int a, b;
    printf("please enter two numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a == b)
        printf("True");
    else
        printf("False");
}