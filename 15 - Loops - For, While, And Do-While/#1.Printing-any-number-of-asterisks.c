#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function checks and prints the next day's date based on
 * the provided day, month, and year.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */

int main(void)
{
	int i, n;

	printf("enter the number of astrix you want\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("*");
	}

	printf("\n");
	return (0);
}
