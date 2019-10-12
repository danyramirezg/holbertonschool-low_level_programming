#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve value at key
 * @ht: is the hash table
 * @key: is the key being searched
 * Return: associated value if found or NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);

	while (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			return (ht->array[idx]->value);
		ht->array[idx] = ht->array[idx]->next;
	}

	return (NULL);
}
