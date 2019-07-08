#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The function´s parameter
 * @accept: The function´s parameter
 *
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count, j, l;
for (l = 0; s[l] > ' '; l++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[l] == accept[j])
{
count++;
}
}
}
return (count);
}
