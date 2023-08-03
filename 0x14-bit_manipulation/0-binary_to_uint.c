#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The converted number, or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int num;

	if (!b)
		return (0);

	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
	}

	num = 0;
	for (p = 0; b[p] != '\0'; p++)
	{
	num <<= 1;
		if (b[p] == '1')
		num += 1;
	}

	return (num);
}

