#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function computes the result of raising a number to a
 * specified power and prints the result.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */

int main(void)
{
	int i, num, pow, tmp;

	printf("enter the number :\n");
	scanf("%d", &num);
	printf("enter the power you want \n");
	scanf("%d", &pow);
	tmp = num;

	for (i = 0; i < pow - 1; i++)
	{
		num = num * tmp;
	}
	printf("%d\n", num);
	printf("\n");
	return (0);
}
