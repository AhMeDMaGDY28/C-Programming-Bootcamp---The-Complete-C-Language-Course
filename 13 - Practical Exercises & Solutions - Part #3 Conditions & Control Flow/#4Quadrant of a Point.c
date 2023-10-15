#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function determines the quadrant of a point in a Cartesian coordinate system.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int x, y;

	printf("enter the X point : \n");
	scanf("%d", &x);
	printf("enter the Y point : \n");
	scanf("%d", &y);

	if (x > 0 && y > 0)
	{
		printf("1st quadrant\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("2nd quadrant\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("3rd quadrant\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("4th quadrant\n");
	}

	printf("\n");
	return (0);
}