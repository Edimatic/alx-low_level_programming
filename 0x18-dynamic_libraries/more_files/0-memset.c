#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: changing of data 
 * @n: index
 * Return: Always *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
