#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specific index in a decimal number
 * @numba: The decimal number to search.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the given index (0 or 1),
 * or -1 if index is invalid.
 */
int get_bit(unsigned long int numba, unsigned int index)
{
	int bit_val;

/* Check if the index is out of range */
	if (index > 63)
	return (-1);

/* Shift the number to the right by the index and isolate the bit value */
	bit_val = (numba >> index) & 1;

	return (bit_val);
}

