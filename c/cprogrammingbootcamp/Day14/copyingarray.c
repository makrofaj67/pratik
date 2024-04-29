#include <stdio.h>
#define SIZE 3
int main()
{
	int array1[SIZE] = {1, 2, 200};
	int array2[SIZE] = {};
	
	int i;
	i = array2[0];
	i = 0;
	while(i < SIZE)
	{
		array2[i] = array1[i];
		i++;
	}
	i = 0;
	while(i < SIZE)
	{
		printf("%d\n", array1[i]);
		i++;
	}
}
