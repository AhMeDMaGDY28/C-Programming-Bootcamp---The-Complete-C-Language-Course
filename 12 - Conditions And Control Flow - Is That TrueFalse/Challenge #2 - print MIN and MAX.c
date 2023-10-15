#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function compares two numbers and prints which one is the maximum and minimum.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	float num1, num2;

	printf("enter the first number : \n");
	scanf("%f", &num1);
	printf("enter the second number : \n");
	scanf("%f", &num2);

	if (num1 > num2)
	{
		printf("%.2f is the maximum and %.2f is the minium\n", num1, num2);
	}
	else
	{
		printf("%.2f is the maximum and %.2f is the minium\n", num2, num1);
	}

	return (0);
}
