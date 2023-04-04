#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning of a listint_t list.
 * @head: pointer to the nodes
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n; /* set pointer to start of node*/

	newnode->next = *head; /* set newnode to current pointer */

	*head = newnode;

	return (newnode);
}

