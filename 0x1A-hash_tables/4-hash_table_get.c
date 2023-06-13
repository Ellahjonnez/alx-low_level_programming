#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with a key
 * @ht: Pointer to the hash table.
 * @key: Key to get the value.
 *
 * Return: value associated with the element, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_n;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node_n = ht->array[index];
	while (node_n && strcmp(node_n->key, key) != 0)
		node_n = node_n->next;

	return ((node_n == NULL) ? NULL : node_n->value);
}
