#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - Function that return the length of a string.
 * @s: The function´s parameter (Character)
 *
 * Return: The length of s
*/
int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
