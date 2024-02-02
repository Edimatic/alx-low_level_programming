#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number after execution
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ikpa;

	hash = 5381;
	while ((ikpa = *str++))
	{
		hash = ((hash << 5) + hash) + ikpa; /* hash * 33 + ikpa */
	}
	return (hash);
}
