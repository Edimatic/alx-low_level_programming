#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Description: This function reverses a singly linked list by changing the
 *              direction of its pointers. It traverses the list while
 *              updating the pointers, effectively reversing the order.
 *              The head pointer is updated to point to the new first node
 *              (previously the last node after reversal).
 *
 * Return: Pointer to the first node in the new (reversed) list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* Pointer to the previous node (initially NULL)*/
	listint_t *next = NULL;

    /* Traverse the list and reverse the pointers*/
	while (*head)
	{
	next = (*head)->next;     /* Store the next node in 'next' pointer */
	(*head)->next = prev;     /* Change direction of the current node's pointer */
	prev = *head;             /* Move 'prev' pointer to the current node */
	*head = next;             /* Move the head pointer to the next node */
	}

    /* After traversal, the 'prev' pointer points to the last node */
	*head = prev;

	return (*head); /* Return the head pointer */
}

