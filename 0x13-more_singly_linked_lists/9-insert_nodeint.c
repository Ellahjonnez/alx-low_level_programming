#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the nodes pointer
 * @idx: the index of the list where the new node should be added
 * @n: integer values stored at nodes
 *
 * Return: the address of the new node, or NULL if it failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *currentnode = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = currentnode;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (currentnode == NULL || currentnode->next == NULL)
		{
			return (NULL);
		}

		currentnode = currentnode->next;
	}

		newnode->next = currentnode->next;
		currentnode->next = newnode;

		return (newnode);


}
