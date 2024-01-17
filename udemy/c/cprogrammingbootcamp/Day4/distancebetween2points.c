#include <stdio.h>
#include <math.h>

int main ()

{   
    float x1, y1, x2, y2, distance;
    printf("Please enter x1, y1, x2, and y2 in order, pressing enter after each entry\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    printf("the coordinates of that two point is something like that:\n (%f,%f) and (%f,%f)\n", x1, y1, x2, y2);

    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    distance = sqrt(distance);

    printf("the distance between two dots is: %f", distance);


}