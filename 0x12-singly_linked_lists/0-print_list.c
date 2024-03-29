#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - a function that prints all the elements of a linked list
 * @h: pointer to the node or list been printed
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;

	}
	return (count);
}
