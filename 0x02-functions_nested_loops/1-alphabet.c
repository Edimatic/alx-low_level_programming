#include "main.h"

/**
 * print_alphabet - Entry point
 * A function that prints the alphabet, in lowercase
 * Return: value
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
