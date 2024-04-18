#include <stdio.h>

int main ()

{
    int a, b;
    printf("please enter the coordinates\n");
    scanf("%d%d", &a, &b);

    if (a > 0 && b > 0)
        printf("its on first quadrant");
    else if (a < 0 && b > 0)
        printf("its on second quadrant");
    else if (a < 0 && b < 0)
        printf("its on third quadrant");
    else if (a > 0 && b < 0)
        printf("its on fourth quadrant");    
}