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
	int num1, num2;
	char operator;

	printf("enter the operator from (+ , -  *  /  %%) : \n");
	scanf("%c", &operator);
	printf("enter the first number : \n");
	scanf("%d", &num1);
	printf("enter the second number : \n");
	scanf("%d", &num2);


	switch (operator)
	{
	case '+':
		printf("the sum is %d", num1 + num2);
		break;

	case '-':
		printf("the difference is %d", num1 - num2);
		break;
	case '*':
		printf("the sum is %d", num1 * num2);
		break;
	case '/':
		if (num2 != 0)
		{
			printf("the Division is %d", num1 - num2);
		}
		else
		{
			printf("Division by zero is not acceptable\n");
		}
		break;
	case '%':
		if (num2 != 0)
		{
			printf("The remainder is %d\n", num1 % num2);
		}
		else
		{
			printf("Error: Modulo by zero is not acceptable\n");
		}
		break;
	default:
		printf("wrong operator\n");
		break;
	}
	printf("\n");
	return (0);
}
