#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_create- Function creates a hash table.
* @size: Size of the array
*
* Return: A pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/* Allocate memory for the table */

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	/*Inicializa the size and the array */

	new_table->size = size;

	/*Allocate memory for the node*/

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
