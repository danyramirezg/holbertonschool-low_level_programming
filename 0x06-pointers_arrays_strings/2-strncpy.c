#include <stdio.h>
#include "holberton.h"
/**
 * *_strncpy - Function that copies a string.
 * @dest: The function´s parameter
 * @src: The function´s parameter
 * @n: The function´s parameter
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != 0; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = 0;
}
return (dest);
}
