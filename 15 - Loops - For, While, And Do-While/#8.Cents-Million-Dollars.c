#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts the user to enter a positive integer 'n.'
 * It then demonstrates a nested loop to print a pattern of numbers in the form
 * of a right-angled triangle. The outer loop iterates from 1 to 'n,' and for
 * each value of 'i,' the inner loop iterates from 1 to 'n' (not 'i' as in the
 * original code) and prints the value of 'i' at each position. The result is a
 * right-angled triangle where each row contains the same number 'i.'
 * After completing the pattern, the program displays a newline character to
 * separate the output.
 * Return: Always returns 0 to indicate successful execution.
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int a;
	float total;

	printf("enter 1 if you choose the 1 million ");
	printf("or 0 to get 1 cent after 30 days: \n");
	scanf("%d", &a);

	if (a == 1)
	{
		printf("here take the 1 million dollars");
		printf("\n");
	}
	else if (a == 0)
	{
		total = 0.01;
		for (int i = 0; i <= 30; i++)
		{
			total = total * 2;
		}
		printf("the money which you will get is %.2f\n", total);
		printf("\n");
	}
	else
	{
		printf("wrong input");
		printf("\n");
	}

	printf("\n");
	return (0);
}
