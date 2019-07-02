#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: Fist integer to swap.
 * @b: Second integer to swap
 *
 * Return: void
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
