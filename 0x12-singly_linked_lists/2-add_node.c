#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - to add a new node at the beginning of a linked list
 * @str: string to be duplicated or add in the node
 * @head: the pointer to the linked list memory
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;
	new->next = *head;
	new->len = len;

	*head = new;

	return (new);

}

