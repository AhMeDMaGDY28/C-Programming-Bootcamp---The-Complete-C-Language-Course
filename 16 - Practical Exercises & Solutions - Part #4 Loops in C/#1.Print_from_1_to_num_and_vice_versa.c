#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts the
 * user to enter a positive integer 'num.'
 * It then prints numbers from 1 to 'num' in
 * ascending order and from 'num' down to 1
 * in descending order. The program displays
 * the numbers with spaces in between,
 * first in ascending order and then in descending
 * order, separated by newline characters.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int num, i, j;

	printf("enter the number :\n");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	for (j = num; j >= 1; j--)
	{
		printf("%d", j);
	}

	printf("\n");
	return (0);
}
