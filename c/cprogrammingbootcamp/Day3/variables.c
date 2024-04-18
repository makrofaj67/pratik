/* 
1) variable type
2) variable name
3) variable content - empty or not
4) variable address

1) variable declaration
2) assignment
3) reading input from user
*/


/*
variable decleration // structure <type> <name>;
variable assingment //  structure <type> <name> = <value>;
                                        <name> = <value>;
*/

/*
reading input // 
int grade1;
scanf("%d", &grade1)
*/

#include <stdio.h>

int main ()

{
    int grade1;
    int grade2;
    printf("ilk notunuzu giriniz:\n");
    scanf("%d", &grade1);
    printf("ikinci notunuzu giriniz:\n");
    scanf("%d", &grade2);

    float ortalama = (grade1 + grade2) / 2;
    
    printf("ortalamanız: %.2f", ortalama);
}

