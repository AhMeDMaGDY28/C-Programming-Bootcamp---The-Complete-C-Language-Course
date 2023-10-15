#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function compares three numbers and prints which one is the maximum and minimum.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num1, num2, num3;

	printf("enter the first number : \n");
	scanf("%d", &num1);
	printf("enter the second number : \n");
	scanf("%d", &num2);
	printf("enter the third number : \n");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			printf("%d is the maximum and %d is the minium\n", num1, num3);
		}
		else if (num3 > num2)
		{
			printf("%d is the maximum and %d is the minium\n", num1, num2);
		}
		}
	else if (num2 >= num1 && num2 >= num3)
	{
		if (num1 > num3)
		{
			printf("%d is the maximum and %d is the minium\n", num2, num3);
		}
		else if (num3 > num1)
		{
			printf("%d is the maximum and %d is the minium\n", num2, num1);
		}
	}
	else if (num3 > num1 && num3 > num2)
	{
		if (num1 > num2)
		{
			printf("%d is the maximum and %d is the minium\n", num3, num2);
		}
		else if (num2 > num1)
		{
			printf("%d is the maximum and %d is the minium\n", num3, num1);
		}
	}
	printf("\n");
	return (0);
}
