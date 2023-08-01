#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 *
 * Description: This function frees all the nodes of a list.
 **/
void free_listint(listint_t *head)
{
	listint_t *temp, *next_node;

	temp = head;
	while (temp != NULL)
	{
	next_node = temp->next;
	free(temp);
	temp = next_node;
	}
}
