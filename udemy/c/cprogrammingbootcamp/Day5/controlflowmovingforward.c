#include <stdio.h>

int main ()

{   
    int grade;
    printf("please enter your grade: \n");
    scanf("%d", &grade);

    if (grade >= 80)
        printf("goodjob!\n");
    else if (grade >= 60)
        printf("not bad... \n");
    else
        printf("you couldnt pass :(");

}