#include "main.h"

/**
* _strspn - Collect the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				h++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (h);
}
