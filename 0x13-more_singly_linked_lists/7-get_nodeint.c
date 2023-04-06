#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - To return the nth node of a linked list.
 * @head: pointer to the nodes
 * @index: index of the node, starting at 0
 *
 * Return: Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (head);
}
