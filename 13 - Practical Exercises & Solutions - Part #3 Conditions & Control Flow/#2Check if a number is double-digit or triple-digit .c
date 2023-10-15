#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function checks if two numbers are equal and prints the result.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num;

	printf("enter the first number : \n");
	scanf("%d", &num);

	if (num > 9 && num < 100)
	{
		printf("double-digit\n");
	}
	else if (num > 99 && num < 1000)
	{
		printf("triple-digit\n");
	}
	else
	{
		printf("neither double/triple\n");
	}

	printf("\n");
	return (0);
}