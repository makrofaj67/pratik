#include <stdio.h>

int main ()

{
    int a;
    printf("please enter the number you want to find it's odd or even\n");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is even!", a);
    }   else {
        printf("%d is odd!", a);
    }
}