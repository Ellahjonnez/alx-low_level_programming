#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - to delete the head node of a listint_t linked list
 * @head: the pointer to the node in the linked list
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!*head)
	{
		return (0);
	}

	tmp = *head; /* Stores head node in tmp */

	data = tmp->n;/*Store data in the head node */

	*head = (*head)->next;/* Makes next node the new head node */

	free(tmp);

	return (data);
}
