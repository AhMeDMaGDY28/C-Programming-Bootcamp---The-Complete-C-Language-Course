#include <stdio.h>
/**
 * Max_Bettwen3 - Find and return the maximum value among three integers.
 *
 * Description: This function prompts the user to enter three integers (num1, num2, and num3).
 * It then compares these numbers to find and return the maximum value among them.
 *
 * return: The maximum value among the three input integers (num1, num2, and num3).
 */
int Max_Bettwen3()
{
	int num1, num2, num3;

	printf("enter num1 and num2 and num3 \n");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			return (num1);
		}
		else
		{
			return (num3);
		}
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			return (num2);
		}
		else
		{
			return (num3);
		}
	}
	else
	{
		return (num3);
	}
}
/**
 * main - Entry point of the program
 *
 * Description: This program uses the 'Max_Bettwen3' function to find and print
 * the maximum value among three integers. The user is prompted to enter the values,
 * and the result is displayed on the screen. The program returns 0 to indicate successful execution.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int max = Max_Bettwen3();
	printf("%d", max);
	printf("\n");
	return (0);
}
