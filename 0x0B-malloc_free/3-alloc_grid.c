#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array.
 * @width: Argument for the integer.
 * @height: Argument for the integer
 *
 * Return: To a pointer
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **p;

if (width <  1 || height < 1)
{

	return (NULL);
}

	p = (int **)malloc(height * sizeof(*p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			};
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}

