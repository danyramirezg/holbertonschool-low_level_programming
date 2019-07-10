#include <stdio.h>
#include "holberton.h"
/**
 * _puts_recursion - Function that prints a string.
 * @s: The function´s parameter (Character)
 *
 * Return: Nothing
*/
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar (10);
return;
}
else
{
_putchar (*s);
_puts_recursion(s + 1);
}
}
