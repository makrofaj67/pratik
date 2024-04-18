#include <stdio.h>

int main ()

{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
        printf("cannot divide by 0");
    else if ((c % b == 0 || b % c == 0) && (b % a == 0 || a % b == 0) && (a % c == 0 || c % a == 0))
        printf("divisible");
    else
        printf("non-divisble");
}