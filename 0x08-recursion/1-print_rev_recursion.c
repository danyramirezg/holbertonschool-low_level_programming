#include <stdio.h>
#include "holberton.h"
/**
 * _print_rev__recursion - Function that prints a string.
 * @s: The function´s parameter (Character)
 *
 * Return: nothing.
*/
void _print_rev_recursion(char *s)
{
if (*s == 0)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
