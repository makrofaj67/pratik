#include <stdio.h>


int main()
{
	int a;
	int newarray[5];

	char s[] = "hello world";
	char c = s[20];

	//char *s = "hello world";
    //*s = 'H';

	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%d\n", newarray[4]);
	printf("%p\n", &newarray);
	/*Bazı sistemler ve derleyiciler, güvenlik nedenleriyle yerel değişkenlere otomatik olarak 0 değerini atayabilir.*/
}