#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts the
 * user to input a grade and ensures that
 * the provided grade is within the valid
 *  range (0-100). The program will keep
 * asking for a grade until a valid grade
 *  is entered. Once a valid grade is provided,
 * the program displays a message confirming the valid grade.
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
