#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the pointer to the nodes in the linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *currentnode;

	while (head)
	{
		currentnode = head;
		head = head->next;

		free(currentnode); /* Frees the linked list */
	}
}
