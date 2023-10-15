#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function extracts and prints
 * the individual digits of a three-digit number and calculates their sum.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num, first_part, second_part, Third_part, sum;

	printf("enter the number that you want to cut its parts:\n");
	scanf("%d", &num);
	Third_part = num % 10;
	second_part = num / 10 % 10;
	first_part = num / 100 % 10;
	sum = first_part + second_part + Third_part;
	printf("the sum of digits %d + %d + %d = %d\n",
		 first_part, second_part, Third_part, sum);
	return (0);
}
