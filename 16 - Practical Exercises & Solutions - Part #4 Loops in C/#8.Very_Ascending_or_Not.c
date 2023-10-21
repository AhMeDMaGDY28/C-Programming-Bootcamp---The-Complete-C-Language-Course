#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program calculates the sum of integers
 * from 15 to a user-defined number 'n.'
 * It prompts the user to enter a value for
 * 'n' and then computes the sum of all integers
 * from 15 to 'n' that are divisible by 15. The program displays the final sum.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int i, z, holder, tmp;

	tmp = 0;
	printf("enter the size\n");
	scanf("%d", &z);
	for (i = 1; i <= z; i++)
	{
		printf("enter the inside of size\n");
		scanf("%d", &holder);

		if (tmp != 0)
		{
			if (holder > tmp)
			{
				printf("very ascending\n");
			}
			else
			{
				printf("not very ascending\n");
			}
		}

		tmp = holder;
	}
	return (0);
}
