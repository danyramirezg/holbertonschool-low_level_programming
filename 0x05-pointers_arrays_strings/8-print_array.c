#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 * @a: Parameter, the element's array.
 * @n: Parameter, the number of elements conteins in the array.
 *
 * return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
