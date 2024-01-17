#include <stdio.h>

int main ()

{
    int dikKenar;
    printf("üçgenin dikkenar uzunluğu ne kadar olsun? \n");
    scanf("%d", &dikKenar);
    printf("\n");
    int looper;
    int valueHolder = dikKenar;
    int c = 1;

    for (looper = 1; looper <= valueHolder; looper++) //kenar sayısı kadar loop aldık, her loopta bir ekleyerek dkkenara kadar yazdırıcaz
    {
        int a = 0;
        while (a < looper)
        {///buradaki while loop dikKenar kere çalışır
            int b = dikKenar - 1;
            while (b < dikKenar)
            {
                printf("%d", c);
                b++;
            }
        //bir dönüşte sadece bir adet 1
        //iki dönüşte iki adet 2
        //üç dönüşte üç adet 3
        //dikKenar dönüşte dikKenar adet (dikKenar)
        ///buradaki while loop dikKenar kere çalışır
            a++;
        }
        c++;
        printf("\n");

    }
}