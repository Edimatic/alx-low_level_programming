#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @bin: Pointer to a string containing a binary number.
 *
 * Return: The converted number, or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *bin)
{
	int pt;
	unsigned int numz;

	if (!bin)
		return (0);

	for (pt = 0; bin[pt] != '\0'; pt++)
	{
		if (bin[pt] != '0' && bin[pt] != '1')
			return (0);
	}

	numz = 0;
	for (pt = 0; bin[pt] != '\0'; pt++)
	{
	numz <<= 1;
		if (bin[pt] == '1')
		numz += 1;
	}

	return (numz);
}

