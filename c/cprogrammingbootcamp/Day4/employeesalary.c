#include <stdio.h>

int main ()

{
    float salaryPerHour, totalHoursWorked;
    printf("please enter the salary per hour and press enter, after that please enter total hours worked to calculate total montly salary of the employee");
    scanf("%f", &salaryPerHour);
    scanf("%f", &totalHoursWorked);

    float salary = salaryPerHour * totalHoursWorked;

    printf("salary of the employee is: %.2f", salary);
}