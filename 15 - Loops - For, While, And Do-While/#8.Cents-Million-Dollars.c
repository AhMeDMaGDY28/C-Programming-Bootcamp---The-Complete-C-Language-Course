#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prompts the user to make a choice by entering
 * either '1' to receive 1 million
 * dollars or '0' to receive 1 cent that doubles
 * every day for 30 days. Based on the user's choice, the program either
 * displays "1 million dollars" or calculates and displays the final amount
 * of money that doubles every day for 30 days. The program then separates the
 * output with a newline character.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
int main(void)
{
	int a;
	float total;

	printf("enter 1 if you choose the 1 million ");
	printf("or 0 to get 1 cent after 30 days: \n");
	scanf("%d", &a);

	if (a == 1)
	{
		printf("here take the 1 million dollars");
		printf("\n");
	}
	else if (a == 0)
	{
		total = 0.01;
		for (int i = 0; i <= 30; i++)
		{
			total = total * 2;
		}
		printf("the money which you will get is %.2f\n", total);
		printf("\n");
	}
	else
	{
		printf("wrong input");
		printf("\n");
	}

	printf("\n");
	return (0);
}
