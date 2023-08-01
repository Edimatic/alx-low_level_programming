#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The integer value of the first node if success, otherwise 0.
 *
 * Description: This function deletes the first node of a singly linked list
 *              and updates the head pointer to point to the next node.
 *              It then returns the integer value of the deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int popped_data;

    /* Check if the list is empty */
	if (*head == NULL)
	return (0);

    /* Store the current head node in a separate pointer */
	temp = *head;

    /* Update the head pointer to point to the next node */
	*head = temp->next;

    /* Store the integer value of the first node */
	popped_data = temp->n;

    /* Free the first node */
	free(temp);

    /* Return the integer value of the deleted node */
	return (popped_data);
}

