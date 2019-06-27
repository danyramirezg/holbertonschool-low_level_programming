#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Function´s parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int j = 0;
	int k = 0;

	if (n > 0)
	{
		while (j < n)
		{
			while (k < j)
			{
				_putchar(' ');
				k++;
			}
			j++;
			k = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
