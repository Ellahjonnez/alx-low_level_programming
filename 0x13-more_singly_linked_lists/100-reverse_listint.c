#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the linkded list node
 * Return: a pointer to the first node of the rversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL;
	listint_t *end;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (*head)
	{
		end = (*head)->next;
		(*head)->next = start;

		start = *head;
		*head = end;
	}

	*head = start;
	return (*head);
}
