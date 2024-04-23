#include <stdio.h>
#include <stdlib.h>

int main()
{
	int kal[2][3] = {{1,2,4},{2,4,5}};

	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 2)
	{	
		j = 0;
		while (j < 3)
		{
			printf("%d", kal[i][j]);
			j++;
		}
		i++;
	}
}