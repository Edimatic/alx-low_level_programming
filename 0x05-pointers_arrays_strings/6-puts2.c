#include "main.h"
/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void Always
*/

void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}

		p++;
	}
	_putchar('\n');
}
