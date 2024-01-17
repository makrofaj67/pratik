#include <stdio.h>

int main ()
{   
    int secondsGiven, hours, minutes, seconds;
    printf("please enter seconds you want to convert: \n");
    scanf("%d", &secondsGiven);

    /*60*60 = 3600 seconds equals to one hour*/

    hours = secondsGiven / 3600;

    /*the remaining seconds should be converted to minutes*/

    minutes = (secondsGiven % 3600) / 60;

    /*the remaining seconds should be left as it is, this can be accomplished by modulo 60*/

    seconds = secondsGiven % 60;

    printf("the converted format is %d hours, %d minutes, %d seconds", hours, minutes, seconds);
    
    return 0;
}