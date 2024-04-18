#include <stdio.h>

int main () 

{
    int yas;
    printf("lutfen yaşınızı giriniz;  \n");
    scanf("%d", &yas);
    int yil;
    printf("lutfen yılı giriniz: \n");
    scanf("%d", &yil);
    int dogumyili = - yas + yil;
    printf("dogum yılınız: %d", dogumyili);
}