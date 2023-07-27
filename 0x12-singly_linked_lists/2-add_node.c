#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: Always address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lenght = lenght;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
