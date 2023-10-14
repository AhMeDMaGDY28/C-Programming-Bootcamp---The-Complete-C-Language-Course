#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates
 * and prints the nth term of an arithmetic sequence
 * based on the user-provided values for
 * the common difference (d), the first term (a_1),
 * and the number of elements (n) in the sequence.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	float a_n, a_1, d;
	int n;

	/* Prompt the user to enter the common difference*/
	printf("Enter the difference in the Arithmetic Sequence: ");
	scanf("%f", &d);

	/* Prompt the user to enter the first term*/
	printf("Enter the first term in the sequence: ");
	scanf("%f", &a_1);

	/* Prompt the user to enter the number of elements in the sequence*/
	printf("Enter the number of elements in the Arithmetic Sequence: ");
	scanf("%d", &n);

	/* Calculate the nth term of the sequence*/
	a_n = a_1 + (n - 1) * d;

	/* Print the calculated nth term*/
	printf("The nth term of the sequence: %f\n", a_n);

	return (0);
}
