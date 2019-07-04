#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers..
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, buffer;
for (i = 0; i < n; i++)
{
buffer = a[n - 1];
a[n - 1] = a[i];
a[i] = buffer;
n--;
}
}
