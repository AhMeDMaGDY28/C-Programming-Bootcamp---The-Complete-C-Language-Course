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
	float a_n, a_1, sum;
	int n;

	/* Prompt the user to enter the first term in the sequence*/
	printf("Enter the first term in the sequence: ");
	scanf("%f", &a_1);

	/* Prompt the user to enter the last term in the sequence*/
	printf("Enter the number of the last term in the sequence: ");
	scanf("%f", &a_n);

	/* Prompt the user to enter the number of elements in the sequence*/
	printf("Enter the number of elements in the sequence*: ");
	scanf("%d", &n);

	/* Calculate the sum of Arithmetic sequence*/
	sum = (((a_1 + a_n) * n) / 2);

	/* Print the calculated nth term*/
	printf("The Sum of Arithmetic sequence: %.2f\n", sum);

	return (0);
}
