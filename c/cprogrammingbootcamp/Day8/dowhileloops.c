#include <stdio.h>

int main ()

{

    int grade;
    do
    {
        printf("please enter a vallid grade\n");
        scanf("%d", &grade);
    } while (grade <= 0 && grade >= 100);

    printf("yes your grade is valid. It is: %d", grade);
}