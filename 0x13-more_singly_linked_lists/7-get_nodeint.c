#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list at the given index.
 * @head: Address of the first node in a list.
 * @index: Position of the node to find (starting from 0).
 * Return: Node address at the given index or NULL if not found.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; index > 0 && head != NULL; index--)
	head = head->next;
	return (head);
}

