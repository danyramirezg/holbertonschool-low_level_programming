#include "holberton.h"
/**
 * puts2 -  Prints one char out of 2 of a string.
 * @str: The function's parameter
 *
 * Return: void.
 */
void puts2(char *str)
{
int i;
char c;
for (i = 0; str[i] != i; i++)
{
if (i % 2 == 0)
{
c = str[i];
_putchar(c);
}
}
_putchar('\n');
}
