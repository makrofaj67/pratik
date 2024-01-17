/*
1) -1 inputu alana kadar input almaya devam et
*/

#include <stdio.h>

int main()

{
	int input;
	int howmany = 0;
	int toplam;

	while (!(input == -1)) {
		if (!(input == -1)) {
			printf("please enter the grade and press enter, to exit enter -1\n");
			scanf("%d", & input);
			howmany++;
			toplam = toplam + input;
			//printf("toplam: %d\n", toplam);
			//printf("howmany: %d\n", howmany);
		}	else {
				break;
		}
	}
	//printf("son toplam: %d\n", toplam);
	//printf("kaç kişi: %d\n", howmany);
	int sonuc = toplam / howmany;
	printf("the average of your grades is; %d", sonuc);
}


/*
while (input != 1)
*/

