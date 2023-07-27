#include <stdio.h>

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - Function executed before the main function.
 *
 * Discription: Function print first executed
 */


void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");


	/* The complete text shown above */

}



