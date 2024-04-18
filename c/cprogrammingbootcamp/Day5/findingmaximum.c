#include <stdio.h>

int main ()

{
    int a, b;
    printf("please enter the numbers you want to compare, first enter first number and press enter then enter the second number and press enter\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        printf("the maximum is: %d", a);
    }   else {
        printf("the maximum is: %d", b);
    }

}