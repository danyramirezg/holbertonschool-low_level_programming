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

/**
  * _abs - Get absolute value
  * @n: number to calculate
  * Return: absolute value of the number
  */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
