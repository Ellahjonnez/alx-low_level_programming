#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - a function that frees a linked list.
 * @head: the pionter to the linked list
 */

void free_list(list_t *head)
{
	list_t *nodes;

	while (head)
	{
		nodes = head->next;
		free(head->str);
		free(head);
		head = nodes;
	}
}
