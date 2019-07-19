#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: min number
 * @max: max number
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
int *p;
int rango, i;

	if (min > max)
		return (NULL);
	rango = max - min + 1;
	p = malloc((rango) * sizeof(*p));
	if (p == NULL)
	return (NULL);
  for (i = 0; i <= rango; min++, i++)
    {
      p[i] = min;
    }
	return (p);
}
