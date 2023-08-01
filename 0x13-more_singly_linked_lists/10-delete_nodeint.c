#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given position.
 * @head: Pointer to the first node of the list.
 * @index: Position of the node to delete (starting from 0).
 *
 * Return: If deletion is successful, return 1. Otherwise, return -1.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		/* Delete the first node */
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	/* Find the node before the one to be deleted */
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	/* Delete the node at the given index */
	next_node = current->next;
	current->next = next_node->next;
	free(next_node);
	return (1);
}

