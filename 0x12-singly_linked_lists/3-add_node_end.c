#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Always address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp1;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp1 = *head;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp;
	return (temp);
}
