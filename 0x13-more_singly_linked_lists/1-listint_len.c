#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: the pointer to the nodes
 *
 * Return: elements or number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++; /* counts the nodes */
		h = h->next; /* go to next node */
	}

	return (element);
}
