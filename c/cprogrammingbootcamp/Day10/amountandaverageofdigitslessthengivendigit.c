#include <stdlib.h>
#include <stdio.h>

int main ()
{	
	int num;
	int digit;
	int count;
	int total;
	float average;

	count = 0;
	total = 0;
	printf("Please enter the number you are going to check:\n");
	scanf("%d", &num);
	printf("Plese enter the digit you wanna check:\n");
	scanf("%d", &digit);
	printf("--------------------------------\n");
    while (num >= 1)
    {
        if (num % 10 < digit)
        {
            count++;
            total = num % 10 + total;
        }
        num = num / 10;
    }
	average = total / (float)count;
	printf("%f", average);
}