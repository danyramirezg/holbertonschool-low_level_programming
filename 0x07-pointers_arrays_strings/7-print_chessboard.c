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
	int a, b;

	a = b = 0;
	while (a < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[i][j]);
		 	b++;
		}
		_putchar(10);
		a++;
	}

}
