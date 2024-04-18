#include <stdio.h>

int main ()

{
    int num;
    int toplam;
    printf("please enter the numb \n");
    scanf("%d", &num);

    int toplam15 = 0;
    int i;

    for (i = 15; i <= num; i = i + 15)
    {
        toplam15 = toplam15 + i;
    }

    int toplam3 = 0;
    for (i = 3; i <= num; i = i + 3)
    {
        toplam3 = toplam3 + i;
    }

    int toplam5 = 0;
    for (i = 5; i <= num; i = i + 5)
    {
        toplam5 = toplam5 + i;
    }

    toplam = toplam3 + toplam5 - toplam15;
    printf("%d", toplam);
}