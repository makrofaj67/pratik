#include <stdio.h>

int main()
{
	int arr[5] = {3,2,3,5,7};
	int tmp[5] = {0};

	int i = 0;
	int k = 4;

	while (i <= 4)
	{
		tmp[i] = arr[k];
		i++;
		k--;
	}
}