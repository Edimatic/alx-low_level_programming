#include "main.h"


/**
 *  * set_bit - sets the value of a bit to 1 when index is given.
 *   * @numba: number to set the strings
 *    * @index: index at which to set
 *     *
 *      * Return: 1 if the output worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *numba, unsigned int index)
{
	unsigned long int bit_val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit_val = 1 << index;
		*numba = *numba | bit_val;
	return (1);
}
