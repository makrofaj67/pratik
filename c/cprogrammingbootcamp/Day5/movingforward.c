#include <stdio.h>

int main ()

{   
    int grade;
    printf("please enter your grade: \n");
    scanf("%d", &grade);

    if (grade >= 80) {
        printf("excellent job!");
    }   else if (grade < 80) {
        if (grade >= 60) {
            printf("not bad!");
        }
    }   if (grade < 60) {
        printf("oh you couldnt pass :(");
    }
    
}