#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates the absolute value of a number.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num;

	printf("enter the number to convert it to absolut value : \n");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("%d\n", num * -1);
	}
	else
	{
		printf("%d\n", num);
	}

	printf("\n");
	return (0);
}