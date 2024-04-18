#include <stdio.h>

int main ()

{

    //int height, width;
    int height;
    int width;
    
    printf("please enter triangle's height:\n");
    scanf("%d", &height);
    printf("please enter triangle's width:\n");
    scanf("%d", &width);

    float area = (float)height * (float)width / 2;

    printf("triangle's area is %.2f", area);
}