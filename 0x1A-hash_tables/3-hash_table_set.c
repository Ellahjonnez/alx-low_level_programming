#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/valu
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0); /* Invalid input */
	}

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}


	/* Duplicate the value */
	char *value_copy = strdup(value);

	if (value_copy == NULL)
	{
		free(new_node);
		return (0);
	}

	/* Update the new node with key, value, and next pointer */
	new_node->key = strdup(key);
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
