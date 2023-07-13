#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, concat_len = 0;
	char *concatenated = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;

	concatenated = malloc((concat_len + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	strncpy(concatenated, s1, len1);
	strncpy(concatenated + len1, s2, n);
	concatenated[concat_len] = '\0';

	return (concatenated);
}

