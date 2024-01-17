#include <stdio.h>

int main ()

{
    printf("Welcome to the Tip calculator.\n");
    float totalbill;
    printf("What was the total bill? $");
    scanf("%f", &totalbill);
    int percentage;
    printf("What percentage tip would you like to give? 10, 12 or 15? ");
    scanf("%d", &percentage);
    int howmanypeople;
    printf("How many people to split the bill? ");
    scanf("%d", &howmanypeople);

    float shouldpay = totalbill * (percentage + 100) / 100 / howmanypeople;
    printf("Each person should pay: %.2f", shouldpay);
}