#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prompts the user
 * to enter a positive integer 'num.'
 * It then calculates and prints a right-angled
 * triangle of double integers from 1 to 'num' (inclusive).
 * The program displays each row with spaces
 * in between the numbers, creating a right-angled triangle.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int n, i, z, x;
	int value = 1;
	int blank_space;

	printf("enter the number  of rows:\n");
	scanf("%d", &n);
	blank_space = n - 1;

	for (i = 1; i <= n; i++)
	{
		for (z = blank_space; z >= 1; z--)
		{
			printf(" ");
		}
		for (x = 1; x <= i; x++)
		{
			printf("%d", value);
			value++;
		}
		printf("\n");
	}

	printf("\n");
	return (0);
}
