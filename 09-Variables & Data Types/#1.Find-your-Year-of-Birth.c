#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints the year in which
 * the person running the program was born based on the current year and age.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int current_year, age;

	printf("Enter the current year\n");
	scanf("%d", &current_year);
	printf("Enter your Age\n");
	scanf("%d", &age);

	int Year_born = current_year - age;

	printf("the year you were born in %d\n", Year_born);
	return (0);
}
