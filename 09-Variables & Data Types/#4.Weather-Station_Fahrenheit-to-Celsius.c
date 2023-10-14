#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints the Celsius equivalent
 * of a temperature in Fahrenheit, based on user-provided values.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	double Fahrenheit;

	printf("Enter the Fahrenheit degree\n");
	scanf("%lf", &Fahrenheit);

	double Celsius_Degree = ((Fahrenheit - 32) / 1.8);

	printf("The Celsius Degrees is: %.2lf\n", Celsius_Degree);
	return (0);
}
