#include <stdio.h>

/**
 * print_before_main - Function executed before the main function.
 * Discription: Function to be executed
 * Return: Always 0 at the end
 */

void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}

int main(void)
{
	/* Your main code here */
	
	printf("Main function executed.\n");

return (0);
}





