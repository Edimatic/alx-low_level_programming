#include "main.h"

/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: Always *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int u;
	int q;

	u = 0;

	for (q = 0; q < 1000; q++)
	{
		if (dest[q] == '\0')
		{
			break;
		}
		u++;
	}

	for (q = 0; src[q] != '\0' && q < n; q++)
	{
		dest[u + q] = src[q];
	}
	dest[u + q] = '\0';
	return (dest);
}

