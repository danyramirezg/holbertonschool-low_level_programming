#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: The function's parameter
 *
 * Return: Void
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != 0; i++)
{
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar(10);
}
