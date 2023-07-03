#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
	int w, l;

	for (w = 0; w < 8; w++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(*(*(w + a) + l));
		}
	_putchar('\n');
	}
}
