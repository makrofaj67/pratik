#include <stdio.h>

int main ()

{
    int row, i, j, bosluk;
    printf("enter row; \n");
    scanf("%d", &row);
    j = 1;

    for (i = 1; i <= row; i++)
        /*
        1 + 2(i-1) rowdaki sayı sayısı
        i row saiyisi
        oncekisayi + 1 = rowunilksaiyisi
        baştaki boşluk rowsayisi - 1 * i
        */
       {
        while (j <= i)
        {
            printf("%d", j);
            j++;
            if (j == i)
            {
                printf("\n");
                
            }

        }
       }
}