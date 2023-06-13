#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	hash_node_t *nxt = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			nxt = tmp->nxt;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = nxt;
		}
	}
	free(ht->array);
	free(ht);
}
