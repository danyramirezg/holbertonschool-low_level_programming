#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char x, y;
for (y = 0; y <= 9; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
