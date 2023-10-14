#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints the Fahrenheit equivalent
 * of a temperature in Celsius, based on user-provided values.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	double Celsius_Degree;

	printf("Enter the Celsius degree\n");
	scanf("%d", &Celsius_Degree);

	float Fahrenheit = ((Celsius_Degree * 1.8) + 32);

	printf("The Fahrenheit Degrees is: %d\n", Fahrenheit);
	return (0);
}
