#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{

	int a = 0;
	int b = 0;

	while (b < 10)
	{
		while (a < 15)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;

		}
	_putchar('\n');
	b++;
	a = 0;
	}
}
