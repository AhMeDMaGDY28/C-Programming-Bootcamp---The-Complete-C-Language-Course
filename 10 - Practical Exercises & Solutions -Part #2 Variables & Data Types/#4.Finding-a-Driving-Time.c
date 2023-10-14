#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates and prints
 * the time required for a journey based on the user-provided values for
 * the distance to travel and the speed.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	float distance, speed, time;

	/*the distance bettwen the two locations in km */
	printf("enter the distance you want to travel: in km please\n ");
	scanf("%f", &distance);
	/*the speed want to drive with*/
	printf("enter the speed: in km/h please\n ");
	scanf("%f", &speed);

	time = distance / speed;
	printf("the time for the travel is %.1f h \n", time);
	return (0);
}
