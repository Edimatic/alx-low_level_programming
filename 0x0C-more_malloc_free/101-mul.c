#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - converting a character to an integer.
 * @x: character to convert.
 * Return: Integer at the end.
 **/

int _atoi_digit(char x)
{
	unsigned int rezz;

	if (x <= '9' && x >= '0')
		rezz = x - '0';
	return (rezz);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0)at the end of programming.
 **/
int _isNumber(char *argv)
{
	int q;

	for (q = 0; argv[q]; q++)
		if (argv[q] < 48 || argv[q] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - Assign array of size * nmemb.
 * @nmemb: number of elements given.
 * @size: size of element given.
 * Return: pointer to array at the ending.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *table;
	unsigned int q;

	table = malloc(size * nmemb);

	if (table == NULL)
		return (NULL);

	for (q = 0; q < (size * nmemb); q++)
		table[q] = '0';

	return (table);
}

/**
 * mul_array - multiply two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0;
	int m;
	int x;

	x = lena;
	for (m = len1 - 1; m >= 0 ; m--)
	{
		mul += (a1[m] - '0') * (a2 - '0') + (a3[x] - '0');
		a3[x] = (mul % 10) + '0';
		mul /= 10;
		x--;
	}

		while (mul != 0)
		{
			mul += a3[x] - '0';
			a3[x] = (mul % 10) + '0';
			mul /= 10;
			x--;
		}

	return (a3);
}
/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void print_array(char *a, int nb)
{
	int c = 0;

	while (a[c] == '0' && (c + 1) < nb)
	{
		c++;
	}
	for (; c < nb; c++)
	{
		_putchar(a[c]);

	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0 at the end.
 */

int main(int argc, char *argv[])
{
	int p;
	int h;
	int len1;
	int len2;
	int lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (p = 0; p < 6; p++)
		{
			_putchar(E[p]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (p = len2 - 1, h  = 0; p >= 0; p--)
	{
	tabres = mul_array(argv[1], len1, argv[2][p], tabres, (lenres - 1 - h));
	h++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}
