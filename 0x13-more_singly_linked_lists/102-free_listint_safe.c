#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list, safely.
 * @head: Pointer to the first node in the linked list.
 *
 * Description:
 * This function safely frees a linked list of type listint_t. It iterates
 * through the list and releases the memory occupied by each node while
 * handling the cases where a loop is present in the list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t num_freed_nodes = 0; /* Variable to store the number of nodes freed */
	int address_diff; /* Variable to calculate the difference in addresses */
	listint_t *current; /* Pointer to the current node being freed */
	listint_t *next_node; /* Temporary pointer to hold the next node deeping */

	/* Check if the list is NULL or empty */
	if (!head || !*head)
		return (0);

	/* Loop to traverse the list and free the nodes */

	while (*head)
	{

		/* Calculate the difference in addresses to detect loops */
		address_diff = *head - (*head)->next;

		/* Check if no loop is detected (positive address difference) */

		if (address_diff > 0)
		{

		current = *head; /* Store the current node in 'current' to free it */
	next_node = (*head)->next; /*Store the nxt node in 'next_node' to avoid lost*/
	free(current); /* Free the current node */
	*head = next_node; /* Move 'head' to the next node in the list */
	num_freed_nodes++; /* Increment the number of nodes freed */
		}
		else /* Loop detected or single node list */
		{
			*head = NULL; /* Set 'head' to NULL to break out of the loop safely */
			num_freed_nodes++; /* Increment the number of nodes freed */
			break;
		}
	}

	*head = NULL; /* Set the head pointer to NULL (list is now empty) */

	return (num_freed_nodes); /* Return the total number of nodes freed */
}

