#include <stdio.h>

/**
 * max_min - Compare two numbers and print the maximum and minimum values.
 *
 * Description: This function takes two integers, num1 and num2, as input.
 * It compares these numbers and prints the maximum and minimum values to the
 * standard output. The function does not return any value; it directly displays
 * the results on the screen.
 *
 * @num1: The first integer to be compared.
 * @num2: The second integer to be compared.
 */
void max_min(int num1,int num2)
{
	if (num1 > num2)
	{
		printf("The max is: %d and the min is: %d\n", num1, num2);
	}
	else
	{
		printf("The max is: %d and the min is: %d\n", num2, num1);
	}
}

/**
 * main - Entry point of the program
 *
 * Description: This program prompts the user to enter two integers, num1 and num2.
 * It then calls the 'max_min' function to compare and print the maximum and minimum values
 * between these two numbers. The results are displayed on the screen, followed by a newline.
 * The program returns 0 to indicate successful execution.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main()
{
	int x, y;

	printf("Enter your first number: ");
	scanf("%d", &x);
	printf("\n");
	printf("Enter your second number: ");
	scanf("%d", &y);
	printf("\n");

	max_min(x, y); /*Call the max_min function to compare and display results*/
	printf("\n");

	return 0; /* Return 0 to indicate successful execution*/
}
