#include "hash_tables.h"

/**
 * key_index - Gets the index of a key/value pair
 * @key: The key to get
 * @size: The size of the array of the hash table.
 *
 * Return:  index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
