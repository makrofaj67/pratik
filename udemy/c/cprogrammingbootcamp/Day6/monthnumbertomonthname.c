#include <stdio.h>

int main ()

{
    int monthNumber;
    printf("please enter the month number\n");
    scanf("%d", &monthNumber);

    switch (monthNumber)
    {
    case 1:
        printf("its January");
        break;
    case 2:
        printf("its February");
        break;
    case 3:
        printf("its March");
        break;
    case 4:
        printf("its April");
        break;
    case 5:
        printf("its May");
        break;
    case 6:
        printf("its June");
        break;
    case 7:
        printf("its July");
        break;
    case 8:
        printf("its August");
        break;
    case 9:
        printf("its September");
        break;
    case 10:
        printf("its October");
        break;
    case 11:
        printf("its November");
        break;
    case 12:
        printf("its December");
        break;
    default:
        printf("there is not a month with given number");
        break;
    }
}