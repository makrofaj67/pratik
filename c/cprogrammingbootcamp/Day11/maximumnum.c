#include <stdio.h>

int main()
{
	int i;
	int array[9] = {1,2,7,3,1,3,5,7,8};

	i = 0;	
	int max = array[0];
	while (i < 9)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		i++;
	}
	printf("%d", max);
}