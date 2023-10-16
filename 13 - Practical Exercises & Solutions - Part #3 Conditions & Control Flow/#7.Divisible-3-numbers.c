#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function converts and prints
 * the time in hours, minutes, and seconds based on the user-provided value
 * in seconds.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num1, num2, num3;

	printf("enter the first number : \n");
	scanf("%d", &num1);
	printf("enter the Second number : \n");
	scanf("%d", &num2);
	printf("enter the 3rd number : \n");
	scanf("%d", &num3);

	if (num1 % num2 == 0 || num1 % num3 == 0 || num2 % num1 == 0 ||
	    num2 % num3 == 0 || num3 % num1 == 0 || num3 % num2 == 0)
	{
		printf(" Divisible \n");
	}
	else
	{
		printf("Non-Divisible");
	}

	printf("\n");
	return (0);
}
