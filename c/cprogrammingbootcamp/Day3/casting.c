/*
casting data type convertion işlemidir.
kural1) int int ile işlem yaptığın zaman sonuç yine bir int olur, ondalık kısım ardından atılır.
kural2) eğer bir işlemde float varsa sonuç float çıkar (ya da double varsa double olarak çıkar)
*/

#include <stdio.h>

int main ()

{
    int num1 = 5, num2 = 2;
    int first = num1 / num2;
    double second = num1 / num2; 
    /*
    num1 ve num2 integer olmasına rağmen, second'ı double olarak tanımladığımız için second double oluyor. ancak olay şöyle gerçekleşiyor;
    num1/num2 bölünüyor, ardından 2.5 bulunuyor, bu 2.5 float olduğu için integere dönüştürülüyor, integer olarak 2 oluşturuluyor. 2 ise
    float olan 2.00'a dönüşüyor. burada bu yüzden bir data kaybı mevcut oluyor.
    */
    double third = (double)num1 / (double)num2; //bu olaya casting denir
    printf("%d, %.2lf, %.2lf\n", first, second, third);

    int num3 = 5;
    double num4 = 2.0;
    int fourth = num3 / num4; 
    double fifth = num3 / num4; 
    /*
    burada ise num3/num4 içerisinde birisi float ya da double olduğu için sonuç 2.5 olarak bulunuyor. bu sonucun zaten double olması gerektiği için, 
    fifth double olarak 2.5'a eşitleniyor. 
    */
    double sixth = (float)num3 / (float)num4;
    printf("%d, %.2lf, %.2lf\n", fourth, fifth, sixth);


    float toint1 = 2.89;
    int num7 = (int)toint1;

    float toint2 = 32.12;
    int num8 = (int)toint2;

    /*
    int casting yapılırken double ya da float'ın sadece tamsayı kısmı alınır
    */

    printf("%d, %d", num7, num8);

}