#include <stdio.h> //standart input output, printf komutu bu dosyada tanımlanmıştır.
#include <stdlib.h>

int main () //burada int fonksiyonun return değerinin tipini belirler, main fonksiyonun ismidir.

{
    printf("\n");
    printf("%f", 5.1); //"%d" bir format belirtecidir. d burada decimal (onluk sistem) açılımıdır.
    printf("\n");
    printf("%d", 5); //"%f" bir format belirtecidir. f burada float açılımıdır.
    printf("\n");
    printf("this is a string"); //string
    printf("\n");
    return 0; //return 0; koyulması programın başarıyla sonlandırıldığını ifade eder ve koymak zorunlu değildir. buraya return "string"; de
//koyabilirsin ancak main() fonksiyonunun dönüş tipi int olduğundan dolayı olmaz.
}