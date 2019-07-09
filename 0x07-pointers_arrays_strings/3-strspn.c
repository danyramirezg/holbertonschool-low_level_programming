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
unsigned int count2, count, j, l;
l = 0;
while (s[l] != 0)
{
count = 0;
for (j = 0; accept[j] != 0; j++)
{
if (s[l] == accept[j])
count = 1;
}
j = 0;
if (count == 0)
break;
count2++;
l++;
}
return (l);
}
