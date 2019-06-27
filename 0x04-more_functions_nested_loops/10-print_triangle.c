#include "holberton.h"
/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The parameter´s integer
 * Return: 0.
 */
void print_triangle(int size)
{
int a, b = 0;
int c;

if (size > 0)
{
while (b < size)
{
c = size - b - 1;
while (a < size)
{
if (c > a)
{
_putchar(' ');
}
else
{
_putchar('#');
}
a++;
}
b++;
a = 0;
_putchar ('\n');
}
}
else
_putchar('\n');
}
