#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int cool, r, k;

	cool = 0;

	while (str[cool] != '\0')
	{
		cool++;
	}

	if (cool % 2 == 0)
	{
		for (k = cool / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	} else if (cooln % 2)
	{
		for (r = (cool - 1) / 2; r < cool - 1; r++)
		{
			_putchar(str[r + 1]);
		}
	}
	_putchar('\n');
}
