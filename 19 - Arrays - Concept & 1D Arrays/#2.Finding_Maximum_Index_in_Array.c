#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function checks for the maximum number in the array.
 *
 * Return: Always returns 0
 */

int main(void)
{
	int i, max_digit, index;
	int number[5];

	for (i = 0; i < 5; i++)
	{
		printf("index %d = Enter value :\n", i + 1);
		scanf("%d", &number[i]);

		max_digit = 0;
		if (number[i] > max_digit)
		{
			max_digit = number[i];
			index = i;
		}
	}
	printf("the  max digit index is %d\n", index);
	printf("the max digit is %d\n", max_digit);
	printf("\n");
	return (0);
}
