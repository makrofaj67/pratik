#include <stdio.h>

int main ()

{
    int d, m, y;
    int isLeapYear;
    printf("please enter day, month and year; \n");
    scanf("%d%d%d", &d, &m, &y);

    if (m == 2)
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
            isLeapYear = 1;
    d++;

    switch (m)
    {
    case 1:    
    case 3:    
    case 5:    
    case 7:    
    case 8:    
    case 10:
    case 12:
        if (d <= 31)
            break; //eğer break koşulu sağlanırsa default çalışır.
    case 4:        
    case 6:        
    case 9:        
    case 11:
        if (d <= 30)
            break;
    case 2:
        if (isLeapYear == 1)
            if (d <= 29)
                break;
        else
            if (d <= 28)
                break;                
    default:
        d = 1;
        m = m + 1;
        if (m == 13)
            y++;
        m = m % 12;
    }
    
    printf("%d, %d, %d", d, m, y);
    
}