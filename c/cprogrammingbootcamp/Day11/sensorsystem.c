#include <stdio.h>

int main()
{
	int i;
	i = 1;
	int temps[19];
	while (i < 8)
	{	
		printf("please enter the temprature in day %d\n", i);
		scanf("%d", &temps[i - 1]);
		i++;
	}
	
	i = 0;
	int max = temps[0];
	int max_index = 0;
	int min = temps[0];
	int min_index = 0;
	int total = 0;
	while (i < 7)
	{
		if (temps[i] > max)
			max_index = i;
		if (temps[i] < min)
			min_index = i;
		total = total + temps[i];
		i++;
	}
	int average = total / 7;

	printf("Max temp day is = %d\nMin temp day is = %d\nAvarage is = %d", max_index + 1, min_index + 1, average);
}