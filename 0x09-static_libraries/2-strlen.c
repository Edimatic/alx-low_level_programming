#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: Always return length of a string
 */

int _strlen(char *s)
{
	int d = 0;

	while (*s != '\0')
	{
		s++;
		d++;
	}
	return (d);
}
