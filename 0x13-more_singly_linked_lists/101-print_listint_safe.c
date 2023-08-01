#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *loop_node = NULL;
	size_t node_count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;
		current = current->next;

	/* Check if the current node is repeated (loop detected) */
		if (current == loop_node)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98); /* Exit the program with status 98 */
		}

	/* Set the loop_node to the current node to detect loops */
		loop_node = current;
	}

	return (node_count);
}

