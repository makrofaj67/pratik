#include <stdio.h>

int main ()

{
    int size, i, number, oncekisayi;
    printf("please enter the size of sequence; \n");
    scanf("%d", &size);
    int sonuc = 1;

    for (i = 1; i <= size; i++)
    {
        printf("please enter the %d. number \n", i);
        scanf("%d", &number);
        if (number <= oncekisayi)
        {
            sonuc = 0;
        }
        oncekisayi = number;
    }

    if (sonuc == 0)
    {
        printf("itsnot very ascending");
    }   else {
        printf("its ascending");
    }
}