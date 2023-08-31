#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 *
 * @decimal_number: The number to print in binary.
 */
void print_binary(unsigned long int decimal_number)
{
	int bit_position;
	int count = 0;
	unsigned long int current_bit;

/* Loop through each bit position (from 63 to 0) */
	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
/*Shift the decimal_number to the right by the current bit position */
	current_bit = decimal_number >> bit_position;

/* Check if the current bit is 1 and print it, update count */
	if (current_bit & 1)
	{
	_putchar('1');
	count++;
	}
/* If count is already nonzero, print 0 for leading zeros */
	else if (count)
	_putchar('0');
	}

/* If count is still zero, the decimal_number is 0, so print 0 */
	if (!count)
        _putchar('0');
}
