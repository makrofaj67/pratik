#include <stdio.h>
#define ARRSIZE 9

int main()
{
	int i;
	int array[ARRSIZE] = {9,2,7,3,1,3,5,7,8};

	i = 0;
	int max_index = 0;
	int max = array[0];
	while (i < ARRSIZE)
	{
		if (array[i] > max)
		{
			max = array[i];
			max_index = i;
		}
		i++;
	}
	printf("%d", max_index);
}