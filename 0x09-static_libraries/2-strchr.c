#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: Always *S
*/

char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] != '\0'; t++)
	{

		if (s[t] == c)
		{
			return (s + t);
		}
	}
	return (0);
}
