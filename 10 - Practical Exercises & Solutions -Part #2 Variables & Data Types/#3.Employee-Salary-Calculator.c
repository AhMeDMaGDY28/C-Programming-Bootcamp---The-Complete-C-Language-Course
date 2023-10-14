#include <stdio.h>

int main(void)
{
    int salary_hour, total_hours, monthly_salary;

    printf("enter the salary per hour");
    scanf("%d",salary_hour);

    printf("total hours worked");
    scanf("%d",total_hours);

    monthly_salary = salary_hour * total_hours;
    
       printf("your salary in this month is %d", monthly_salary);

}