#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - Function that locates a character in a string.
 * @s: The function´s parameter
 * @c: The function´s parameter
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != 0; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
{
return (s + i);
}
else
{
return ('\0');
}
}
