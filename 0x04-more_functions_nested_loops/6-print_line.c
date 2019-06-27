#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: integer
 *
 */
void print_line(int n)
{
int a;
if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (a = 1; a <= n; a++)
{
	_putchar('_');
}
_putchar('\n');
}
}
