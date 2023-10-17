#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function checks and prints the next day's date based on
 * the provided day, month, and year.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */

int main(void)
{
	int day, month, year;

	printf("enter the day : \n");
	scanf("%d", &day);
	printf("enter the month by number of the month : \n");
	scanf("%d", &month);
	printf("enter the year : \n");
	scanf("%d", &year);
	if (day <= 0)
	{
		printf("wrong day try again idiot\n");
		printf("enter the day : \n");
		scanf("%d", &day);
	}
	else
	{
		switch (month)
		{
		case 1:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 31)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 2:
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				if (day > 29)
				{
					printf("there is not more than 31 days in this month enter the day correct\n");
					break;
				}
				else
				{
					if (day == 29)
					{
						month++;
						day = 1;
					}
					else
					{
						day++;
					}
					printf("the next day is %02d : %02d : %d\n", day, month, year);
					break;
				}
			}
			else
			{
				if (day > 28)
				{
					printf("there is not more than 31 days in this month enter the day correct\n");
					break;
				}
				else
				{
					if (day == 28)
					{
						month++;
						day = 1;
					}
					else
					{
						day++;
					}
					printf("the next day is %02d : %02d : %d\n", day, month, year);
					break;
				}
			}
		case 3:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 31)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 4:
			if (day > 30)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 30)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 5:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 31)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 6:
			if (day > 30)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 30)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 7:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 31)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 8:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct");
				break;
			}
			else
			{
				if (day == 31)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 9:
			if (day > 30)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 30)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 10:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 31)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 11:
			if (day > 30)
			{
				printf("this month is 31 days only\n");
				break;
			}
			else
			{
				if (day == 30)
				{
					month++;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		case 12:
			if (day > 31)
			{
				printf("there is not more than 31 days in this month enter the day correct\n");
				break;
			}
			else
			{
				if (day == 31)
				{
					year++;
					month = 1;
					day = 1;
				}
				else
				{
					day++;
				}
				printf("the next day is %02d : %02d : %d\n", day, month, year);
				break;
			}
		default:
			printf("wrong month try again idiot\n");
			break;
		}
	}

	putchar('\n');
	return (0);
}
