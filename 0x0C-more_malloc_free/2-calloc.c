#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: Always string after execution
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	for (o = 0; o < n; o++)
	{
		s[o] = b;
	}
	return (s);
}

/**
 * _calloc - Assigned memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer after execution
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);
	_memset(pt, 0, (nmemb * size));
	return (pt);
}
