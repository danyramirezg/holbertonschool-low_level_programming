#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b: Argument for the unsigned int.
 *
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
