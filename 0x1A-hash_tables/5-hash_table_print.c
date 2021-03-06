#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: hash table to be printed
 * Return: printed elements of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (i == 1)
			printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			i = 1;
			temp = temp->next;
		}
		idx++;
	}
	printf("}\n");
}
