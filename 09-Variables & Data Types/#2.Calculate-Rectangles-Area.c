#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints the area of a rectangle
 * based on the user-provided values for height and width.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	float Heigth, Width;

	printf("Enter the rectangle Height\n");
	scanf("%f", &Heigth);
	printf("Enter the rectangle Width\n");
	scanf("%f", &Width);

	float Area = Heigth * Width;

	printf("The area of the rectangle is: %.2f\n", Area);
	return (0);
}
