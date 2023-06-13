#include "hash_tables.h"

/**
 * hash_table_create - For creating the hash table.
 * @size: Size of the array.
 *
 * Return: NULL If something went wrong.
 *        Else- Returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	/* Allocating memory for the hash table structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Allocate memory for the array */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initializes the array elements to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;

	return (ht);
}
