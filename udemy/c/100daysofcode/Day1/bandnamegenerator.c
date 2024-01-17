#include <stdio.h>

int main () 

{   
    char cityname[50];
    printf("What's name of the city you grew up in?\n");
    scanf("%s", &cityname);
    char petname[50];
    printf("What's your pet's name?\n");
    scanf("%s", &petname);
    printf("Your band name could be %s %s", petname, cityname);
}