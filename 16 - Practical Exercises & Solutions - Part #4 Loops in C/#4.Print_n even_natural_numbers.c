#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts the user to enter a positive integer 'num.'
 * It then calculates and prints the double of each integer from 1 to 'num' (inclusive).
 * The program displays the results with spaces in between and ends with a newline character.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int num, i;

	printf("enter the number :\n");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d ", i * 2);
	}

	printf("\n");
	return (0);
}
