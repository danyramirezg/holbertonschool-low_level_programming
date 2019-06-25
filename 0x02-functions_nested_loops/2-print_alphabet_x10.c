#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: void
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
