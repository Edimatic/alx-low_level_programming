#include "main.h"
/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
*/


char *_strncpy(char *dest, char *src, int n)
{
	int v;

	for (v = 0; v < n && src[v] != '\0'; v++)
		dest[v] = src[v];

	for ( ; v < n; v++)
		dest[v] = '\0';

	return (dest);
}
