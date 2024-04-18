#include <stdio.h>

int main ()

{
    int a;
    printf("please enter a number\n");
    scanf("%d", &a);

    if (a < 1000 && a > 99)
        printf("its triple digits");
    else if (a < 100 && a > 9)
        printf("its double digits");
    else
        printf("its neither double or triple digits");
}