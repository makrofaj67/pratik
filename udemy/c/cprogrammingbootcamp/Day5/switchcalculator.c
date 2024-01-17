#include <stdio.h>

int main () 

{
    char operator;
    float a, b;
    float result;

    printf("please enter your first number: ");
    scanf("%f", &a);

    printf("please enter your operator +, -, *, / or %: ");
    scanf(" %c", &operator);

    printf("please enter your second number: ");
    scanf("%f", &b);

    switch (operator)
    {
        case '+':
            result = a + b;
            printf("your result is %.2f", result);
            break;
        case '-':
            result = a - b;
            printf("your result is %.2f", result);
            break;
        case '*':
            result = a * b;
            printf("your result is %.2f", result);
            break;
        case '/':
            if (b == 0)
                printf("you cant divide by 0! \n");
            else
                result = a / b;
                printf("your result is %.2f", result);
            break;
        case '%':
            result = a * b / 100;
            printf("your result is %.2f", result);
            break;
        default:
            printf("wrongmathematical operation\n");
            break;
    }
}