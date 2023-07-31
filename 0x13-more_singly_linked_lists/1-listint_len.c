#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *arv;
	unsigned int cos = 0;

	arv = h;
	while (arv)
	{
		cos++;
		arv = arv->next;
	}
	return (cos);
}
