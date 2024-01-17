#include <stdio.h>

int main ()

{
    char a;
    printf("please enter the character you want to check\n");
    scanf("%c", &a);

    int hexo = ("%X", a);
    //printf("%X", hexo);

    if (hexo >= 0x30 && hexo <= 0x39)
        printf("this is a digit!!!");
    else if (hexo >= 41 && hexo <= 0x5A)
        printf("this is a uppercase letter!!!");
    else if (hexo >= 0x61 && hexo <= 0x7A)
        printf("this is a lowercase letter!!!");
    else
        printf("i dont know what is it");
}