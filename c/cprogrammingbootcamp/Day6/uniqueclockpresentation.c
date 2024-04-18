#include <stdio.h>

int main ()

{
    int a;
    printf("please enter amount of seconds you want to convert\n");
    scanf("%d", &a);
    
    int seconds, minutes, hours;

    hours = a / 3600;
    minutes = (a % 3600) / 60;
    seconds = a % 60;

    if (hours < 10)
        printf("0");
    printf("%d : ", hours);

    if (minutes < 10);
        printf("0");
    printf("%d : ", minutes);

    if (seconds < 10);
        printf("0");
    printf("%d", seconds);
        
}