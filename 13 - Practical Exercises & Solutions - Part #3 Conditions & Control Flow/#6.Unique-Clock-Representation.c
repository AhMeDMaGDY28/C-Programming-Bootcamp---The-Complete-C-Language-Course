#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function converts and prints
 * the time in hours, minutes, and seconds based on the user-provided value
 * in seconds.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int input_second, hours, minutes, seconds;
	int tmp_hours, tmp_minutes;

	printf("input the seconds you want to convert\n");
	scanf("%d", &input_second);
	tmp_hours = (input_second % 3600);
	hours = ((input_second - tmp_hours) / 3600);
	tmp_minutes = (tmp_hours % 60);
	minutes = ((tmp_hours - tmp_minutes) / 60);
	seconds = tmp_minutes;

	if (seconds > 60)
	{
		minutes++;
	}
	if (minutes > 60)
	{
		hours++;
	}

	if (hours > 24)
	{
		hours = 0;
	}
	if (hours < 10)
	{
		printf("0");
		printf("%d : ", hours);
	}
	else
	{
		printf("%d : ", hours);
	}
	if (minutes < 10)
	{
		printf("0");
		printf("%d : ", minutes);
	}
	else
	{
		printf("%d : ", minutes);
	}
	if (seconds < 10)
	{
		printf("0");
		printf("%d : ", seconds);
	}
	else
	{
		printf("%d ", seconds);
	}
	/*     printf("%02d:%02d:%02d\n", hours, minutes, seconds); this is an easy way*/
	printf("\n");
	return (0);
}
