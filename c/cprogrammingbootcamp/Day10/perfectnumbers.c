#include <stdio.h>

int ft_sum_of_divisorsv2(int num)
{
	int tmp;
	int result;
	int pair;

	tmp = 1;
	result = 0;
	while (tmp * tmp < num)
	{
		if (num % tmp == 0)
		{	
			pair = num / tmp;
			result = result + tmp + pair;
		}
		tmp++;
	}
	if (tmp * tmp == num)
	{
		result = result + pair;
	}
	result = result - num;
	return (result);
}

int main ()
{
	int a;

	a = 12;
	if (ft_sum_of_divisorsv2(a) == a)
	{
		printf("perfecto");
	}
	else
	{
		printf("not perfecto");
	}
}