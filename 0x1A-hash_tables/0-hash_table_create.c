#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array to be created
 *
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int eddy;

	if (size == 0)
		{
			return (NULL);
	}

/* Allocate memory for hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		{
		return (NULL);
	}

/* Allocate memory for array of hash nodes */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		{
			free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

/* Initialize all hash node pointers to NULL */
	for (eddy = 0; eddy < size; eddy++)
	{
			hash_table->array[eddy] = NULL;
		}

return (hash_table);
}
