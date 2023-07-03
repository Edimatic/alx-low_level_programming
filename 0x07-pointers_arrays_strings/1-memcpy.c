#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}
	return (dest);
}
