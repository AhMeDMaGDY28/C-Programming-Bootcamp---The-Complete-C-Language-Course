#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates a loop that repeatedly prints
 * an apology message for not listening to a teacher. The loop continues until
 * it reaches a count of 1000, at which point it terminates. The program
 * then displays a newline character to separate the output.
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
