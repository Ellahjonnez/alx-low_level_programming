#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to the nodes
 */

void free_listint2(listint_t **head)
{
	listint_t *freenodes;

	if (!head) /* checks if head is empty or not*/
	{
		return;
	}
	while (*head)
	{
		freenodes = (*head)->next;
		free(*head);

		*head = freenodes; /* checks next node to be freed */
	}

	head = NULL;

}


