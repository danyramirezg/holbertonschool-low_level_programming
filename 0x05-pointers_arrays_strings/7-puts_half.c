#include "holberton.h"
/**
 * puts_half - function that prints half of a string.
 * @str: The function's parameter
 */
void puts_half(char *str)
{
int a, b;
while (str[a] != '\0')
a++;
if (a % 2 == 0)
b = a / 2;
else
b = ((a + 1) / 2);
while (b < a)
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}
