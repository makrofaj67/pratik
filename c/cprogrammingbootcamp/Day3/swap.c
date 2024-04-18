#include <stdio.h>

int main () 

{
    int a = 10;
    int b = 20;

    int temp;

    temp = a; //c'nin değeri a daki değer olur
    a = b; //b'nin değeri a daki değer olur
    b = temp; //c'nin değeri b'deki değer olur (b'nin değeri a'daki değerdi)

    printf("%d, %d", a, b);
}

