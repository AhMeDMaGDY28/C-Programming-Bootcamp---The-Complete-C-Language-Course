#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function computes the average of a series of grades
 * provided by the user. The user can input grades one by one, and the program
 * will keep calculating the sum of grades and the average until the user
 * enters -1 to stop input.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */

int main(void)
{
	int grade = -1;

	while (grade < 0 || grade > 100)
	{
		printf("Please enter your grades if not valied it will not be allowed\n");
		scanf("%d", &grade);
	}
	printf("you have entered a valid grade which is : %d\n", grade);
	printf("\n");
	return (0);
}
