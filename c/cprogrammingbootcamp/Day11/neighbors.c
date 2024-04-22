#include <stdio.h>

int main()
{
	int i;
	i = 1;

	int neighbors[7] = {1,3,2,4,3,4};

	while(i < 6)
	{
		if ((neighbors[i - 1] * neighbors [i + 1]) == neighbors[i])
		{
			printf("iyi komsular var");
		}
		i++;
	}
}