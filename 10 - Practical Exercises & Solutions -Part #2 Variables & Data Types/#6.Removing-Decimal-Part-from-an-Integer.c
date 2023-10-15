#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function extracts and prints
 * the decimal part of a user-provided floating-point number.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	float input, the_decimal_part;

	int a;

	printf("enter your float number\n");
	scanf("%f", &input);

	a = input;
	the_decimal_part = input - a;

	printf("this is the the decimal part %f\n", the_decimal_part);

	return (0);
}
