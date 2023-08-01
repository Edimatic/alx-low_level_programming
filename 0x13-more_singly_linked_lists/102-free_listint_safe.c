#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;

	while (h && *h)
	{
		diff = *h - (*h)->next;
		*h = (diff > 0) ? ((*h)->next) : NULL;
		len++;
	}

	return (len);
}

