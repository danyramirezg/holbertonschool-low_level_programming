#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Argument for the integer unsigned
 * @size: Argument for integer
 *
 * Return: The pointer - result.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int i;
char *result;

if (nmemb == 0 || size ==0)
{
return (NULL);
}
	result = malloc(nmemb * size);
	if (result == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		result[i] = 0;
	}
	return (result);
}
