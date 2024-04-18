#include <stdio.h>
#include <stdlib.h>

int main ()

{
    char grade;
    printf("please enter your grade\n");
    scanf("%c", &grade);

    switch (grade)
    {
        case 'A':
            printf("your grade is between 90-100");
            break;
        case 'B':
            printf("your grade is between 80-89");
            break;
        case 'C':
            printf("your grade is between 70-79");
            break;
        case 'D':
            printf("your grade is between 60-69");
            break;
        case 'E':
            printf("your grade is between 59-60");
            break;
        case 'F':
            printf("your grade is between 0-59");
            break;
        default:
            printf("damn boi");
            break;
    }
}
