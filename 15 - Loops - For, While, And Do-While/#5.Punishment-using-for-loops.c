#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates a loop that repeatedly prints
 * an apology message for not listening to a teacher. The loop continues until
 * it reaches a count of 1000, at which point it terminates. The program
 * then displays a newline character to separate the output.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int i = 0;

	while (i != 1000)
	{
		printf("iam sorry for not lisening to my teacher ");
		printf("i will practice more next time !\n");
		i++;
	}
	printf("\n");
	return (0);
}
