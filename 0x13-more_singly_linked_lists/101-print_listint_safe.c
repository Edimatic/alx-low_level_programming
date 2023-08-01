#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, safely.
 * @head: Pointer to the list of type listint_t to print.
 *
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	long int address_diff;

	while (head)
	{
		/* Calculate the difference in addresses to detect loops */

		address_diff = head - head->next;
		num_nodes++;

		 /* Print the address and value of the current node */

		printf("[%p] %d\n", (void *)head, head->n);

		if (address_diff > 0)
			head = head->next; /* Move to the next node if no loop detected */
		else
		{

		/* Print the address and value of the node where the loop starts*/

			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	/* Return the number of nodes in the list */

	return (num_nodes);
}

