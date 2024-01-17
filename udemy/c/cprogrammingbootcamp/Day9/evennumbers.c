#include <stdio.h>

int main ()

{
    int count;
    int i = 1;
    printf("kaç tane çift numara yazdırılsın: \n");
    scanf("%d", &count);

    while (i <= count) {
        if (i != count) {
            printf("%d, ", i *2);
            i++;
        }   else {
            printf("%d", i *2);
            i++;
        }
    }
}