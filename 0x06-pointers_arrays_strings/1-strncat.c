#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{

	int dest_len, k;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[dest_len + k] = src[k];

	/*The program should end with a end of string char*/

	dest[dest_len + k] = '\0';

	return (dest);
}
