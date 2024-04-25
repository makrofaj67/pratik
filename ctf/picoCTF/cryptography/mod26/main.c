#include <stdio.h>

void rot13(char *str) 
{
    int i = 0;
    while (str[i]) {
        char c = str[i];
        if (('a' <= c && c <= 'm') || ('A' <= c && c <= 'M')) 
		{
			str[i] = c + 13;
		}
        else if (('n' <= c && c <= 'z') || ('N' <= c && c <= 'Z'))
		{
			str[i] = c - 13;
		}
        i++;
    }
}

int main()
{
	FILE* fpt;
	char buffer[255];

	fpt = fopen("flagcrypted", "r");
	fgets(buffer, 255, fpt);
	rot13(buffer);
	printf("%s", buffer);


}