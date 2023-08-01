#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely.
 * @head: Pointer to the list of type listint_t to print.
 *
 * Return: Always nNumber of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		if (head > head->next)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

		num++;
	}

	return (num);
}

