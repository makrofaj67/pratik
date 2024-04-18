#include <stdio.h>

int maxof3 ()
{
    int i, a, b;
    int max = 0;

    for (i = 1; i <= 3; i++)
    {
        printf("please enter the  %d. number:\n", i);
        scanf("%d", &a);
        b = a;

        if (b - max > 0)
        {
            max = b;
        }
    }
    return max;
}

int main ()

{
    int max2;
    max2 = maxof3(); //it dont print, it just return to max2
    printf("%d", max2); //it will print now.
    return 0;
}