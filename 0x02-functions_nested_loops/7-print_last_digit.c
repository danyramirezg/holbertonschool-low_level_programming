#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @c: integer
 *
 * Return: c
 */
int print_last_digit(int c)
{
if (c < 0)
{
c = -(c % 10);
_putchar (c % 10 + '0');
}
else
{
c= c % 10;
_putchar (c % 10 + '0');
}
return (c);
}
