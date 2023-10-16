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
	int i, max_digit;
	int Phone_number[11] = {0, 1, 0, 6, 9, 2, 1, 9, 1, 1, 9};

	for (i = 0; i < 11; i++)
	{
		printf("index %d = value : %d\n", i, Phone_number[i]);
		max_digit = 0;
		if (Phone_number[i] > max_digit)
		{
			max_digit = Phone_number[i];
		}
	}
	printf("the max digit is %d\n", max_digit);
	printf("\n");
	return (0);
}
