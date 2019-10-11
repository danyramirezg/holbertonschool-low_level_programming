#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key.
 * @key: Is the key of the function
 * @size: The size of the array of the hash table
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	
	return index;
}
