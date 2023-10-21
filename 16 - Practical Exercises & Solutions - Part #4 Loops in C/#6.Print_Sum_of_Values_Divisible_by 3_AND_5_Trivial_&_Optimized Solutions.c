#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program calculates the sum of integers from 15 to a user-defined number 'n.'
 * It prompts the user to enter a value for 'n' and then computes the sum of all integers
 * from 15 to 'n' that are divisible by 15. The program displays the final sum.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int i, sum, n, x;

	printf("enter the number you want to sum  from 0 to it\n");
	scanf("%d", &n);
	sum = 0;
	for (i = 15; i <= n;i = i + 15)
	{

		sum = sum + i;
	}
	printf("the sum is %d\n", sum);
	printf("\n");
	return (0);
}