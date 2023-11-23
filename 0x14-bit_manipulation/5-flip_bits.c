#include "main.h"

/**
 * flip_bits - Counts the number of bits to change to get from one number.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_position, count = 0;
	unsigned long int current_bit;
	unsigned long int exclusive = n ^ m;

/* Loop through each bit position (from 63 to 0) */
	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
/* Shift the exclusive number to the right by the current bit position */
	current_bit = exclusive >> bit_position;

/* Check if the current bit is 1 and increment the count */
	if (current_bit & 1)
	count++;
	}

	return (count);
}
