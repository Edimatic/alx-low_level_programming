#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143;
	long int AB;

	for (AB = 2; AB < num; AB++)
	{
		if (num % AB == 0)
		{
			num = num / AB;
		}
	}
	printf("%ld\n", AB);
	return (0);
}
