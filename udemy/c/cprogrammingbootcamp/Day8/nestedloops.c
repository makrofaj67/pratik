#include <stdio.h>

int main ()

{
    int dikKenar;
    printf("üçgenin dikkenar uzunluğu ne kadar olsun? \n");
    scanf("%d", &dikKenar);
    printf("\n");
    int looper;
    int valueHolder = dikKenar;

    for (looper = 1; looper <= valueHolder; looper++) //kenar sayısı kadar loop aldık, her loopta bir ekleyerek dkkenara kadar yazdırıcaz
    {
        int a = 0;
        while (a < looper)
        {
            printf("%d ", a + 1);
            a++;
        }
        printf("\n");
        //bir dönüşte bir
        //iki dönüşte iki
        //üç dönüşte üç
        //dikKenar dönüşte dikKenar
    }
}