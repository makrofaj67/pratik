#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char* to_list = argv[1];
	int len = strlen(to_list);
	int i = 0;

	while(i < len - 1)
	{
		if (to_list[i + 1] < to_list[i])
		{	
			printf("not sorted");
			return (0);
		}
		i++;
	}
	printf("sorted");
	return (1);
}