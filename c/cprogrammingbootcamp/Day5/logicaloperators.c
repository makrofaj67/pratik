#include <stdio.h>

int main ()

{
    int money, grade;
    printf("please enter your money and grade\n");
    scanf("%d", &money);
    scanf("%d", &grade);

    if (money > 60 && grade > 80) //logical and
        printf("success");
    if (money < 60 || grade < 80) //logical or
        printf("fail");
    if (!(money == 55)) //logical not
        printf("your momey not 55");
}