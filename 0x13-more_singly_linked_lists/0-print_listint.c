#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to print all the elements of a linked list.
 * @h: the pointer to the nodes of the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n); /* print current node*/

		h = h->next; /*go to next node*/

		count++;
	}

	return (count);
}
