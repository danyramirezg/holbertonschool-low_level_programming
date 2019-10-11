#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - Function that adds an element to the hash table.
 * @ht: The hash table to add or update 
 * @key: Is the key of the function
 * @value: The value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *elem = NULL, *list = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	
	index = key_index((unsigned char *) key, ht->size);
	list = ht->array[index];

	while (list)
	{
		if (strcmp(key, list->key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			if (list->value == NULL)
				return (0);
			return (1);	
		}
		list = list->next;
	}
	elem = malloc(sizeof(hash_node_t));
	if (elem == NULL)
		return (0);
	elem->key = strdup(key);
	if (elem->key == NULL)
	{
		free(elem);
		return (0);
	}
	elem->value = strdup(value);
	if (elem->value == NULL)
	{
		free(elem->key);
		free(elem);
		return (0);
	}
	elem->next = ht->array[index];
	ht->array[index] = elem;
	return (1);
}

