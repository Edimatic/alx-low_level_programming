#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer at the end
 **/

size_t print_listint(const listint_t *h)
{
        const listint_t *arv;
        unsigned int cont = 0;

        arv = h;
        while (arv)
        {
                printf("%d\n", arv->n);
                cont++;
                arv = arv->next;
        }
        return (cont);
}
