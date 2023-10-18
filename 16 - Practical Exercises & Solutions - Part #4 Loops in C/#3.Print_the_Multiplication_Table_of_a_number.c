#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts
 * the user to enter a positive integer 'num.'
 * It then calculates the sum of all integers from 1 to 'num' (inclusive) and
 * prints the result. The program displays the sum and a newline character.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int num, sum, i;

	sum = 0;
	printf("enter the number :\n");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
