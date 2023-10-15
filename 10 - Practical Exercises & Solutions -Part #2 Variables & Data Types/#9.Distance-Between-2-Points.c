#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints
 * the distance between two points in a 2D space.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	float X_1, Y_1, X_2, Y_2;
	float X_3, Y_3, distance;

	printf("Enter the X-coordinate of the first point: ");
	scanf("%f", &X_1);
	printf("Enter the Y-coordinate of the first point: ");
	scanf("%f", &Y_1);
	printf("Enter the X-coordinate of the second point: ");
	scanf("%f", &X_2);
	printf("Enter the Y-coordinate of the second point: ");
	scanf("%f", &Y_2);

	X_3 = X_1 - X_2;
	Y_3 = Y_1 - Y_2;

	/*Calculate the distance using the Pythagorean theorem*/
	distance = sqrt(X_3 * X_3 + Y_3 * Y_3);

	printf("distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %f\n",
		 X_1, Y_1, X_2, Y_2, distance);

	return (0);
}
