#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Function that prints the chessboard
 * @a: The function´s parameter
 *
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	c = b = 0;
	while (c < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[c][b]);
		b++;
		}
		_putchar(10);
		c++;
	}

}
