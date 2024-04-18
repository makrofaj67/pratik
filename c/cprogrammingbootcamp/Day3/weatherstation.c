#include <stdio.h>

void main ()

{
    double celcius;
    printf("lütfen fahrenheit'a dönüştürmek istediğiniz celcius değerini giriniz: \n");
    scanf("%lf", &celcius);

    double fahrenheit = (celcius * 1.8)+ 32;

    printf("girdiğiniz celcius'un fahrenheit cinsinden değeri: %.2lf\n", fahrenheit);

}

void ftoc ()

{
    double fahrenheit2;
    printf("lütfen fahrenheit'a dönüştürmek istediğiniz celcius değerini giriniz: \n");
    scanf("%lf", &fahrenheit2);

    double celcius2 = (fahrenheit2 - 32) / 1.8;

    printf("girdiğiniz celcius'un fahrenheit cinsinden değeri: %.2lf\n", fahrenheit2);
}