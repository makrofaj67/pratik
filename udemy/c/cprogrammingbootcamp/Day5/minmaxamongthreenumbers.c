#include <stdio.h>

int main ()

{   
    float a, b, c;
    float min, max;
    printf("please enter the numbers you wanna compare\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    min = a;
    max = b;

    if (a < b) {
        min = a;
        max = b;
    }   if (c < min) {
        min = c;
    }   if (c > max) {
        max = c;
    }

    printf("Maximmum is: %.2f\n", max);
    printf("Minumum is: %.2f", min);
}