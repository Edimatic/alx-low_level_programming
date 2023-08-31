#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: A pointer to the number to change.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of range */
	if (index > 63)
	return (-1);

/* Create a bitmask with 0 at the index-th bit and use bitwise */
	/*AND to clear the bit */

	*n = (~(1UL << index) & *n);

	return (1);
}

