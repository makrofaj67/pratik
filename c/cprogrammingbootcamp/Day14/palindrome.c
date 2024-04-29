#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_palindrome(char* kal)
{
	int a = strlen(kal); // 4
	int b = 0;
	int c = a;
	while (b < (c + 1) / 2)
	{
		if (kal[b] != kal[a - 1])
		{
			printf("0");
			return(0);
		}
		b++;
		a--;
	}
	printf("1");
	return 1;
}

int main(int argc, char* argv[])
{	
	int i;
	i = 0;

	while (argv[1][i])
		i++;

	char* numberseries = (char*)malloc(sizeof(char) * (i));

	i = 0;
	while (argv[1][i])
	{	
		numberseries[i] = argv[1][i];
 		i++;
	}
	is_palindrome(numberseries);
}