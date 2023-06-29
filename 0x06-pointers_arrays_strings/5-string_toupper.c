#include "main.h"
/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
*/

char *string_toupper(char *str)
{
	int k;

	for (k = 0; strk[k] != '\0'; k++)
	{
		if (str[k] <= 'z' && str[k] >= 'a')
			str[k] -= 32;
	}
	return (str);
}
