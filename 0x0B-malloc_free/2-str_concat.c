#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int k = 0;

	while (*s != '\0')
	{
		s++;
		k++;
	}
	return (k);
}

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char at the end
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int k1, k2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		k1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		k2 = _strlen(s2);

	conc = malloc(k1 + k2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}

