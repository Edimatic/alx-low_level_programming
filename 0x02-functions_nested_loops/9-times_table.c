#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int x = 0;
int y;
int rep;
while (x <= 9)
{
	y = 0;
	while (y <= 9)
	{
		rep = x * y;
		if (y == 0)
		{
			_putchar('0' + rep);
		}
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar('0' + rep);
		}
		else
		{
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}

		if (y < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		y++;
	}
	_putchar('\n');
	x++;
}

}
