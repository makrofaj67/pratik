#include <stdio.h>

int main () 

{
    double height, width;

    printf("please enter the rectangle's height: \n");
    scanf("%lf", &height);
    printf("please enter rectangle's width: \n");
    scanf("%lf", &width);
    
    double perimeter = (height + width) * 2;

    printf("the perimeter of the rectangle is %.2f", perimeter);
    
}