#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char* to_list = argv[1];
	int len = strlen(to_list);

	int i = 0;
	int max = to_list[0] + to_list[1];
	while(to_list[i + 1])
	{
		if (to_list[i] + to_list[i + 1] > max)
		{
			max = to_list[i] + to_list[i + 1];
		}
		i++;
	}
	max = max - 2 * '0';
	printf("%d", max);
}