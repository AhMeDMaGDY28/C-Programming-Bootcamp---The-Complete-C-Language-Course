#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts the user to enter a positive integer 'n.'
 * It then demonstrates a nested loop to print a pattern of numbers in the
 * form of a right-angled triangle. The outer loop iterates from 1 to 'n,' and
 * for each value of 'i,' the inner loop
 * iterates from 1 to 'i' to print numbers.
 * After completing the pattern, the program displays a newline character
 * to separate the output.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int n, i, j;

	printf("enter the number of n :\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}

	printf("\n");
	return (0);
}
