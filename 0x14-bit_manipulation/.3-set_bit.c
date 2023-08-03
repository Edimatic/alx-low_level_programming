#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @number: A pointer to the number to change.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *number, unsigned int index)
{
/* Check if the index is out of range */
	if (index > 63)
	return (-1);

/* Shift 1 to the left by the index and use bitwise OR to set the bit to 1 */

	*number = ((1UL << index) | *number);

	return (1);
}

