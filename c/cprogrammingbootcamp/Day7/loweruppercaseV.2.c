#include <stdio.h>

int main ()

{
    char hexo;
    printf("please enter the character you want to check\n");
    scanf("%c", &hexo);

    if (hexo >= '0' && hexo <= '9')
        printf("this is a digit!!!");
    else if (hexo >= 'A' && hexo <= 'B')
        printf("this is a uppercase letter!!!");
    else if (hexo >= 'a' && hexo <= 'b')
        printf("this is a lowercase letter!!!");
    else
        printf("i dont know what is it");
}