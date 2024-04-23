#include <stdio.h>
#define SIZE 15

int main()
{	
	int i;
	int j;
	int kal[SIZE][SIZE];

	i = 0;
	j = 0;
	while (i < SIZE)
	{	
		j = 0;
		while (j < SIZE)
		{
			kal[i][j] = i * j;
			j++;
		}
		i++;
	}

	i = 0;
	while (i < SIZE)
	{	
		j = 0;
		while (j < SIZE)
		{
			printf("%5d", kal[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
