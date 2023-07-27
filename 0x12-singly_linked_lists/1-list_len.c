#include "lists.h"

/**
 * list_len - Calculate the given number of elements.
 * @h: Pointer to a list.
 * Return: Always an integer at the end
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter_value = 0;

	temp = h;
	while (temp)
	{
		counter_value++;
		temp = temp->next;
	}
	return (counter_value);
}
