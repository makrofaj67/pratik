//c*x^n = n * c * x ^ (n - 1)
#include <stdio.h>

int derivate (int c, int x, int n)
{	
	int result = 1;
	int tmp;

	tmp = n;
	while (n - 1 >= 1)
	{
		result = result * x;
		n = n - 1;
	}
	result = tmp * c * result;
	return result;
}

int main ()
{	
	printf("%d", derivate(4, 2, 3));
	return (0);
}