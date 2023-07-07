#include "main.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: no returning of any value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
