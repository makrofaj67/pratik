#include <stdio.h>
#include <string.h>

int main()
{
	char kal[] = {'1','2','3','\0'};
	char kal3[] = "12321";
	printf("%d\n%d\n", strlen(kal), strlen(kal3));
	printf("%d\n%d\n", sizeof(kal), sizeof(kal3));
}