#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints the average of three grades
 * based on user-provided values.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int grade_1, grade_2, grade_3;

	printf("Enter the First Grade\n");
	scanf("%d", &grade_1);
	printf("Enter the Second Grade\n");
	scanf("%d", &grade_2);
	printf("Enter the 3rd Grade\n");
	scanf("%d", &grade_3);

	float avg = ((grade_1 + grade_2 + grade_3) / 3);

	printf("The average of the grades is: %.2f\n", avg);
	return (0);
}
