#include <stdio.h>

int ft_sum_of_divisors(int num)
{
	int tmp;
	int result;

	tmp = num;
	result = 0;
	while (tmp >= 1)
	{
		if (num % tmp == 0)
		{
			result = result + tmp;
		}
		tmp--;
	}
	return (result);
}

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
	return (result);
}

int main ()
{	
	int a;

	a = 65;
	printf("%d", ft_sum_of_divisors(a));
	
	return (0);
}