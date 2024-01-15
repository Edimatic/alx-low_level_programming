#include "main.h"

/**
 * _islower - checking the code for Holberton School students.
 *
 * @c:  is a parameter
 *
 * Return: Always return 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
