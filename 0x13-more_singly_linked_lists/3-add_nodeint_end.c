#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 * @head: Address of the first node of the list.
 * @n: Integer value to insert in the new node.
 *
 * Return: Address of the new node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
{
        // If the list is empty, make the new node the first node (head)
	*head = new_node;
}
else
{
        // Find the last node in the list
 	listint_t *current = *head;
 	while (current->next != NULL)
 	current = current->next;

        // Append the new node after the last node
	current->next = new_node;
}

return (new_node);
}

