#include <stdio.h>

float avgGrade3 (int grade1, int grade2, int grade3)

{
    int total = grade1 + grade2 + grade3;
    float avg = total / 3.0;
    return avg;
}

int main ()

{
    int g1, g2, g3;
    printf("enter 3 grades; ");
    scanf("%d%d%d", &g1, &g2, &g3);

    printf("avarage = %f\n", avgGrade3(g1, g2, g3));
    return 0;
}