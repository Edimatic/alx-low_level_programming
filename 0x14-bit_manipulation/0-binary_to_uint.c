#include "main.h"

/**
 * _binary_string_to_unsigned_int - Converts a binary string to an unsigned int
 * @binary_string: A pointer to a string containing a binary number
 *
 * Return: An unsigned int with the decimal value of the binary number,
 * or 0 if there's an error
 */
unsigned int _binary_string_to_unsigned_int(const char *binary_string)
{
	int index;
	unsigned int result;

	result = 0;
	if (!binary_string)
	return (0);

	for (index = 0; binary_string[index] != '\0'; index++)
	{
	if (binary_string[index] != '0' && binary_string[index] != '1')
	return (0);
	}

	for (index = 0; binary_string[index] != '\0'; index++)
	{
		result <<= 1;
		if (binary_string[index] == '1')
		result += 1;
	}
	return (result);
}

