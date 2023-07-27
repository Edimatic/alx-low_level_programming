#include <stdio.h>

void print_first(void) __attribute__ ((constructor));

/**
 * print_before_main - Function executed before the main function.
 * Discription: Function to be executed
 * Return: Always 0 at the end
 */


void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}



