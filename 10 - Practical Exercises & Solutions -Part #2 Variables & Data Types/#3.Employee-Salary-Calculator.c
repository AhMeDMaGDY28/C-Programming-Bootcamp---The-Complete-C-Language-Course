#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates
 * and prints the monthly salary based on the user-provided values for
 * the salary per hour and total hours worked.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int salary_hour, total_hours, monthly_salary;

	printf("enter the salary per hour");
	scanf("%d", &salary_hour);

	printf("total hours worked");
	scanf("%d", &total_hours);

	monthly_salary = salary_hour * total_hours;

	printf("your salary in this month is %d", monthly_salary);
	return (0);
}
