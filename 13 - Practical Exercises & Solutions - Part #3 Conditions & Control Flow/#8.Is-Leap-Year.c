#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function checks if a given year is a leap year or not.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int given_year;

	printf("Enter the year you want to know if it leap year or not\n");
	scanf("%d", &given_year);
	if (given_year % 4 == 0 && given_year % 100 != 0
		|| given_year % 400 == 0)
	{
		printf("Year %d is Leap Year ", given_year);
	}
	else
	{
		printf("%d is not a leap year.\n", given_year);
	}
	printf("\n");
	return (0);
}
