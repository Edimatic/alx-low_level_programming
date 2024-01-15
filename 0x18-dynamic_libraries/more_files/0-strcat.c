#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: still return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int g;
	int b;

	g = 0;
	b = 0;

	while (dest[g] != '\0')
	{
		g++;
	}

	while (src[b] != '\0')
	{
		dest[g] = src[b];
		b++;
		g++;
	}

	dest[g] = '\0';
	return (dest);
}

