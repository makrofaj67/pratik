#include <stdio.h>

void print_binary(int n) {
    if (n > 1) {
        print_binary(n/2);
    }
    printf("%d", n % 2);
}

int main ()

{
    char myChar1 = 97;
    char myChar2 = 0x61;
    char myChar3 = 'a';

    printf("%d, %d, %d \n", myChar1, myChar2, myChar3);
    printf("%c, %c, %c \n", myChar1, myChar2, myChar3);
    printf("%X, %X, %X \n", myChar1, myChar2, myChar3);
    printf("%o, %o, %o \n", myChar1, myChar2, myChar3);

    char another1 = 9;
    char another2 = '9';

    printf("%d, %d \n", another1, another2);

    /*
    karakter oluşturuken eğer value '' arasına alınırsa
    bu integer ya da diğer baseli sayılı olmaktan çıkar
    ascii table'daki bir karaktere dönüşür. bu yüzden ascii
    tablosunda bu karakteri temsil eden hex int vs.. değişik olur

    ancak tamsayı olarak girildiğinde, ascii tableda direkt olarak
    tamsayı olarak görülür. ve ascii tableda işaret ettiği karakter
    farklı olur.

    char oluştururken '' kullanmak zorundasınızdır, diğer türlü eğer
    kabul edilebilir bir sayı varsa, integer olarak algılanır.
    */

}