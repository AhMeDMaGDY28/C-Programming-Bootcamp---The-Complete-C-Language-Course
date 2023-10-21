#include <stdio.h>

/**
 * printGreetings - Greeting Function
 *
 * Description: This function is responsible for printing a series of greeting messages
 * to the standard output. It displays messages to welcome the user and provide some words
 * of encouragement.
 *
 * Return: This function does not return any value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO1 BLENDED
 */
void printGreetings(void)
{
	printf("Greeting Function\n");
	printf("Hello!\n");
	printf("Welcome to the best course (ever) in C programming language\n");
	printf("Good Luck\n");
	return (0);
}

/**
 * main - Entry point of the program
 *
 * Description: This program serves as the entry point for the application. It calls the
 * 'printGreetings' function to display a series of greeting messages. After calling the
 * function, the program adds a newline character and then returns 0 to indicate successful
 * execution.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	printGreetings(); /* Call the greeting function*/
	printf("\n");	/*Display a newline character*/

	return 0; /*Return 0 to indicate successful execution*/
}
