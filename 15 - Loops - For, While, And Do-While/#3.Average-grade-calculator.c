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
	int grade = 0, sum = 0, grade_count = 0;
	float avg;

	printf("Please enter your grades or '-1' to stop : ");
	scanf("%d", &grade);
	while (grade != -1)
	{
		sum = sum + grade;
		printf("enter the grade or (-1) to stop :\n");
		scanf("%d", &grade);
		grade_count++;
	}
	printf("the sum is %d\n", sum);
	printf("the grade count is %d\n", grade_count);
	avg = sum / grade_count;
	printf("the average is %f\n", avg);
	printf("\n");
	return (0);
}
