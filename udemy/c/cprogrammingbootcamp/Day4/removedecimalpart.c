#include <stdio.h>

int main ()

{    float number;
    printf("please enter the float that you want to remove its decimal part. \n");
    scanf("%f", &number);
    printf("number is %f\n", number);
    int decimalpart = (int)number;
    printf("decimal part is %d\n", decimalpart);
    float  removedDecimal = number - decimalpart;

    printf("if you remove the decimal part of the number it will look like this; %f", removedDecimal);
}