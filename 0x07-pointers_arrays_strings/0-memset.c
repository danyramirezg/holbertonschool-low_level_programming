#include <stdio.h>
#include "holberton.h"
/**
 * *_memset - Function that fills memory with a constant byte.
 * @s: The function´s parameter
 * @b: The function´s parameter
 * @n: The function´s parameter
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
