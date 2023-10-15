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
	printf("%d Hours\n%d Minutes\n%d Seconds\n", hours, minutes, seconds);

	return (0);
}
