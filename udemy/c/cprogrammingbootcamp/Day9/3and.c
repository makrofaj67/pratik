#include <stdio.h>

int main ()

{
    int num;
    printf("please enter the numb \n");
    scanf("%d", &num);

    int toplam = 0;
    int i;

    for (i = 15; i <= num; i = i + 15)
    {
        toplam = toplam + i;
    }
    printf("%d", toplam);
}