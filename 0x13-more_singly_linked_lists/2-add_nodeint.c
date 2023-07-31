#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 *
 * Description: This function adds a new node at the beginning of a linked list.
 *              It allocates memory for the new node and sets its integer value.
 *              The new node becomes the new head of the list.
 *
 * Return: The address of the new node (new head), or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        /* Memory allocation failed */
        return (NULL);
    }

    /* Set the integer value of the new node */
    new_node->n = n;

    /* Make the new node point to the current head */
    new_node->next = *head;

    /* Update the head pointer to point to the new node (new head) */
    *head = new_node;

    /* Return the address of the new node (new head) */
    return (*head);
}

