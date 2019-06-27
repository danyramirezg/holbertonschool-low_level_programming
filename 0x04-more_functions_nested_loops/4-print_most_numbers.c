#include "holberton.h"
/**
 * print_most_numbers - prints the numbers to 9 do not print 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i == 2) ||  (i == 4))
{
continue;
}
else
{
_putchar (i + '0');
}
}
_putchar('\n');
}
