#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - Function that creates an array of chars.
 * @size: Argument for the size of the array..
 * @c: Argument for the char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create;

	create = malloc(size * sizeof(c));
	if (create == NULL || size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
		create[i] = c;
return (create);
}
