#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - Function that searches a string for any of a set of bytes
 * @s: The function´s parameter
 * @accept: The function´s parameter
 *
 * Return: count.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int j;
while (*s != 0)
{
for (j = 0; accept[j] != 0; j++)
{
if (*s == accept[j])
{
return(s);
}
s++;
}
}
return (0);
}
