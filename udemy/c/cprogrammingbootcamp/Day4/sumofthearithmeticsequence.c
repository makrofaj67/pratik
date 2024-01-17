#include <stdio.h>

int main ()

{
    int d, a1, n;
    printf("please anter the difference and press enter, initial term and press the enter and total term and press the enter to find n-th term\n");

    scanf("%d", &d);
    scanf("%d", &a1);
    scanf("%d", &n);

    int nthterm = a1 + (n-1) * d;

    int sumofthearitmeticsequence = (nthterm + a1)/2 * n;

    printf("the sum of the of the arithmeticsequence is: %d", sumofthearitmeticsequence);
}