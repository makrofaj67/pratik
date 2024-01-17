#include <stdio.h>

int main ()

{
    int age;
    int currentyear;

    printf("please enter your age; \n");
    scanf("%d", &age);
    printf("please enter currentyear: \n");
    scanf("%d", &currentyear);

    int yearyouborn = currentyear - age;

    printf("Your birthyear: %d\n", yearyouborn);
    printf("Your birthyear: %d", currentyear - age);
}