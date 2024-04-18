#include <stdio.h>

int main ()

{
    int num, kalan, toplam1, toplam2, loop;
    printf("please enter the number; \n");
    scanf("%d", &num);
    loop = 1;
    toplam1 = 0;
    toplam2 = 0;
    printf("\n");
    while (num > 0)
    {
        printf("%d. loop başı\n", loop);
        kalan = num % 10;
        printf("kalan = %d\n", kalan);
        if (kalan % 2 == 0)
        {
            toplam1 = toplam1 + kalan;
        }   else    {
            toplam2 = toplam2 + kalan;
        }
        printf("toplam = %d\n", toplam1);
        num = (num - kalan) / 10;
        printf("num = %d\n", num);
        printf("%d. loop sonu\n", loop);
        loop++;
        printf("\n");
    }

    printf("tek toplamı=%d, çift toplam=%d", toplam2, toplam1);
}