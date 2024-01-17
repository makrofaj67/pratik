#include <stdio.h>

int main ()

{   
    float a, b;
    printf("please enter the numbers you wanna compare\n");
    scanf("%f", &a);
    scanf("%f", &b);

    if (a > b) {
        printf("the max is %f\nthe min is %f\n", a, b);
    }   else {     
        printf("the max is %f\nthe min is %f\n", b, a);
    }

}