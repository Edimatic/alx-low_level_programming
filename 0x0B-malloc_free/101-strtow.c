#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: Number of words always
 */
int count_word(char *s)
{
	int flag, p, j;

	flag = 0;
	j = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int z, x = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (z = 0; z <= len; z++)
	{
		if (str[z] == ' ' || str[z] == '\0')
		{
			if (c)
			{
				end = z;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[x] = tmp - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = z;
	}

	matrix[x] = NULL;

	return (matrix);
}
