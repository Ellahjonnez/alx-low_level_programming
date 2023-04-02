#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list.
 * @head: pointer to the memorry of the node
 * @str: the string to be added
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));

	if (!head)
	{
		return (NULL);
	}

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next)
	{
		current = current->next;
	}

	current->next = new;
	return (new);
}
