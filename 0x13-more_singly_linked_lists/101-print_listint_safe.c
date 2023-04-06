#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the nodes
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *currentnode, *print;
	size_t counter = 0;

	if (!head || !head->next)
	{
		return (0);
	}

	currentnode = head;
	while (currentnode)
	{

		printf("[%p] %d\n", (void *)currentnode, currentnode->n);
		counter++;

		if (currentnode > currentnode->next)
		{
			currentnode = currentnode->next;
		}
		else
		{
			print = currentnode->next;
			printf("-> [%p] %d\n", (void *)print, print->n);
			break;
		}
	}
	return (counter);
}
