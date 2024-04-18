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

    char saniye[3];
    if (seconds < 10)
        sprintf(saniye, "0%d", seconds);
    else
        sprintf(saniye, "%d", seconds);

    char dakika[3];
    if (minutes < 10)
        sprintf(dakika, "0%d", minutes);
    else
        sprintf(dakika, "%d", minutes);
    
    char saat[3];
    if (hours < 10)
        sprintf(saat, "0%d", hours);
    else
        sprintf(saat, "%d", hours);

    printf("%s : %s : %s", saat, dakika, saniye);
    //printf("%d %d %c", hours, minutes, saniye);
}