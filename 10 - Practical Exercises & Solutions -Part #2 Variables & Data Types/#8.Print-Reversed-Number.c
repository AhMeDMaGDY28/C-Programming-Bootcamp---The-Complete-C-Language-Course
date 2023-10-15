#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function reverses the digits of a three-digit number
 * and displays the reversed number.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int num, first_part, second_part, Third_part, sum;

	printf("enter the number that you want to reverse it:\n");
	scanf("%d", &num);
	Third_part = num % 10;
	second_part = num / 10 % 10;
	first_part = num / 100 % 10;
	sum = first_part + second_part + Third_part;
	printf("the reversed shape of number is %d%d%d\n",
		 Third_part, second_part, first_part);
	return (0);
}
