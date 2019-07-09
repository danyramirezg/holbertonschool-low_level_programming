#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - Function that copies memory area
 * @dest: Parameter to destination memory area
 * @src: Parameter to source memory area
 * @n: Number of bytes
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
