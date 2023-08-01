#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 *
 * Description: This function frees all the nodes of a list and sets the head
 *              pointer to NULL to indicate an empty list.
 *
 * It takes a pointer to the head pointer of the list (double pointer), so
 * it can update the head to NULL once all nodes are freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

    /* Check if the head pointer is NULL or points to an empty list */
	if (head == NULL || *head == NULL)
	return;

    /* Start from the head node */
	current = *head;

    /* Loop through the list and free each node */
	while (current != NULL)
	{
/* Store the next node in a separate pointer */
	next_node = current->next;

/* Free the current node */
	free(current);

/* Move to the next node */
	current = next_node;
}

    /* Set the head pointer to NULL to indicate an empty list */
	*head = NULL;
}

