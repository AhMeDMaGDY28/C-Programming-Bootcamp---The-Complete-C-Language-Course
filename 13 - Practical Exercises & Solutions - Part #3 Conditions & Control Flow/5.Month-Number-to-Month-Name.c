#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function performs arithmetic operations on two numbers
 * based on the operator provided by the user.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int month;

	printf("enter the month number : \n");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("this month is January");
		break;

	case 2:
		printf("this month is February");
		break;
	case 3:
		printf("this month is March");
		break;
	case 4:
		printf("this month is April");
		break;

	case 5:
		printf("this month is May");
		break;
	case 6:
		printf("this month is June");
		break;
	case 7:
		printf("this month is July");
		break;

	case 8:
		printf("this month is August");
		break;
	case 9:
		printf("this month is Septemper");
		break;
	case 10:
		printf("this month is October");
		break;

	case 11:
		printf("this month is November");
		break;
	case 12:
		printf("this month is December");
		break;
	default:
		printf("wrong month\n");
		break;
	}
	printf("\n");
	return (0);
}