//float ve integer arasında işlem yapabilirsin.

#include <stdio.h>

int main () 

{
    int grade1, grade2, grade3;
    printf("lütfen ilk notunuzu giriniz: \n");
    scanf("%d", &grade1);
    printf("lütfen ikinci notunuzu giriniz: \n");
    scanf("%d", &grade2);
    printf("lütfen üçüncü notunuzu giriniz: \n");
    scanf("%d", &grade3);
    double ortalama = ((double)grade1 + (double)grade2 + (double)grade3) / 3;  //double ve integer arasında işlem
    /*
    double ortalama = (grade1 + grade2 + grade3)/3.0 //aynısını verir
    */
    printf("ortalamanız: %.2lf", ortalama);    

}