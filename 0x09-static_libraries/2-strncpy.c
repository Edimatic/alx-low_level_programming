#include "main.h"

/**
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return:Always return *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; src[p] != '\0' && p < n; p++)
	{
		dest[p] = src[p];
	}

	for ( ; p < n; p++)
	{
		dest[p] = '\0';
	}
	return (dest);
}
