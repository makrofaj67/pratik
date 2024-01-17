#include <stdio.h>

int main () 

{
    float speed, distance;
    printf("please enter the speed of the vehicle and press enter, after that please enter the distance and press enter\n");
    scanf("%f", &speed);
    scanf("%f", &distance);

    float time = distance / speed;
    int timed = (int)time;
    float minute = - timed + time;
    float amountOfMinute = 60 * minute;

    printf("the amount of time need to arrive at destination is %d hours, %.0f minutes", timed, amountOfMinute);
}