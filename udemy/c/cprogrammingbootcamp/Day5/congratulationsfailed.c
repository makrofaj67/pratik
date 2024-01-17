#include <stdio.h>

int main ()

{
    int grade;
    printf("please enter your grade; \n");
    scanf("%d", &grade);

    if (grade >= 65) {
        printf("congratulations, you passed your exam! \n");
    }  else {
        printf("sorry! you could not pass your exam!");
    }

}