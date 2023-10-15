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
	int num1, num2;

	printf("enter the first number : \n");
	scanf("%d", &num1);
	printf("enter the second number : \n");
	scanf("%d", &num2);
	if (num1 == num2)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	

	printf("\n");
	return (0);
}
