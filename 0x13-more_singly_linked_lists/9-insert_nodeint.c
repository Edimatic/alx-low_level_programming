#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given position.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;

	for (; temp && idx > 1; idx--)
		temp = temp->next;

	if (!head || (idx > 0 && !temp))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0 || !*head)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

