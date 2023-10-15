#include <stdio.h>

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
	int X;

	printf("enter your X : \n");
	scanf("%d", &X);
	int X_2 = X * X;
	int X_4 = X_2 * X_2;
	int X_6 = X_4 * X_2;
	int X_8 = X_4 * X_4;

	printf("this is X^2 is equal %d\n", X_2);
	printf("this is X^4 is equal %d\n", X_4);
	printf("this is X^6 is equal %d\n", X_6);
	printf("this is X^8 is equal %d\n", X_8);
	return (0);
}
