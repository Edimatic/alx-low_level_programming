#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
        unsigned int number = 1;
        char *byte_pointer = (char *) &number;

/* If the first byte (lowest address) is 1, it's a little endian machine */
        return (*byte_pointer);
}

