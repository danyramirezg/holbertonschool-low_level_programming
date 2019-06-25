#include <stdio.h>
#include "holberton.h"
/**
 * _abs - function that computes the absolute value
 * @c: integer
 *
 * Return: c
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
return (c * -1);
}
