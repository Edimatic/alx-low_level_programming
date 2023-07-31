#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Always new node address at the end
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *arv;

	arv = malloc(sizeof(listint_t));
	if (arv == NULL)
		return (NULL);

	arv->n = n;
	arv->next = *head;
	*head = arv;
	return (*head);
}
