#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list.
 * @head: pointer to the node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int i;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	current = *head;
	for (i = 0; i < (index - 1); i++)
	{

		if (!current->next)
			return (-1);
		current = current->next;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}


