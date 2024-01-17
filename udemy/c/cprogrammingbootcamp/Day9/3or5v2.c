#include <stdio.h>

int main ()

{
    int num, i;
    int toplam;
    printf("please enter the numb \n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            toplam = toplam + i;
        }
    }
    printf("%d", toplam);
}