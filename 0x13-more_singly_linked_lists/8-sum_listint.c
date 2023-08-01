#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Integer sum of all data (n).
 **/
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
	total += head->n;
	head = head->next;
	}
	return (total);
}

