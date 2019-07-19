#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * array_range - create an array of integers (min to max)
 * @min: min number
 * @max: max number
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
int *p;
int i, dif;

	if (min > max)
		return (NULL);
	dif = max - min;
	p = malloc((dif + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < dif; min++, i++)
	{
	p[i] = min;
	}
return (p);
}
