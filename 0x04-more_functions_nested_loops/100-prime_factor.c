#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	long int ab;

	for (ab = 2; ab < x; ab++)
	{
		if (x % ab == 0)
		{
			x = x / ab;
		}
	}
	printf("%ld\n", ab);
	return (0);
}
