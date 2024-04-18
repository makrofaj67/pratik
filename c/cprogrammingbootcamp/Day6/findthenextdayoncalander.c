#include <stdio.h>

int main ()

{
    int d, m, y;
    printf("please enter the day, month and year: \n");
    scanf("%d%d%d", &d, &m, &y);
    //year can be anything
    //m is maximum 12
    //d is maximum 31
    //1 3 5 7 8 10 12 ==== 31
    //4 6 9 11 ==== 30
    //2 === in leap years 29, in common years 28
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d == 31) {
            d = 1;
            m++;        
    }   else {
        d++;
    }
        if (m == 13) {
        m = 1;
        y++;
    }
    }
    
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d == 30) {
            d = 1;
            m++;        
    }   else {
        d++;
    }
        if (m == 13) {
        m = 1;
        y++;
    }
    }
    
    if (m == 2) {
        if (y % 400 == 0) {
        if (d == 29) {
            d = 1;
            m++;        
    }   else {
        d++;
    }          
    }   else if (y % 100 == 0) {
        if (d == 28) {
            d = 1;
            m++;        
    }   else {
        d++;
    }     
    }   else if (y % 4 == 0) {
        if (d == 29) {
            d = 1;
            m++;
        }   else {
            d++;
        }
    }   else {
        if (d == 28) {
            d = 1;
            m++;
        }   else {
            d++;
        }
    }
    }

    printf("%d : %d : %d", d, m, y);
}