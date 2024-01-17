/*
1 3 5 7 ..........  17 aritmetik diziler.
a1 a2 a3 a4 a5 a6 ................. a9
d = 2 // difference
a1 =  1 // initial term
n = 9 // total terms
n-th term = an (a9) = 17
*/

/*
exercise
d = 2, a1 = 1, n = 9, an = ?
an = a1 + (n-1)*d
*/

#include <stdio.h>

int main ()

{
    int d, a1, n;
    printf("please anter the difference and press enter, initial term and press the enter and total term and press the enter to find n-th term\n");

    scanf("%d", &d);
    scanf("%d", &a1);
    scanf("%d", &n);

    int nthterm = a1 + (n-1) * d;
    printf("the last term of the sequence is: %d", nthterm);

}