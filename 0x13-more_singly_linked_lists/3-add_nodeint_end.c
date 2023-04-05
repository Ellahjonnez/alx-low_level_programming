#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end - function that adds a new node at the end of a linked list.
 * @head: pointer to the nodes
 * @n: the nodes integer values
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currentnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next)
		{
			currentnode = currentnode->next;
		}

		currentnode->next = newnode;
	}
	return (newnode);
}

