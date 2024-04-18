#include <stdio.h>

int main ()

{
    double height, width;

    printf("please enter the triangle's height: \n");
    scanf("%lf", &height);  //longfloat
    printf("please enter the triangle's width: \n");
    scanf("%lf", &width);

    double area = height * width / 2;

    printf("the are of triangele is: %.2f", area);

}


/*
double float'tan çok daha fazla veri depolayabilir
bu yüzden okunurken longfloat olarak okunur
*/