void swappointer(int* a, int* b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;	
}

void swap(int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;	
}

int main()
{
	int a;
	int b;
	int* pa;
	int* pb;

	pa = &a;
	pb = &b;
	swappointer(pa, pb);
	swap(a, b);
}