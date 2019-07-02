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
int x;
x = 0;
while (x < n)
{
if (x != n - 1)
printf("%d, ", a[x]);
else
printf("%d", a[x]);
x++;
}
_putchar('\n');
}
