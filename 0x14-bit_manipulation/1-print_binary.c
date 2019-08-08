#include <stdio.h>
#include "holberton.h"

/**
* print_binary - Prints the binary representation of a number
* @n: Unsigned int
* Return: Nothing 
*/
void print_binary(unsigned long int n)
{
	int i = 0, size = 0, var;

	if (n == 0)
		_putchar('0');

	while(n >> size)
	{
		size++;
	}
	for (i = (size - 1); i >= 0; i --)
	{
		var = n >> i;

		if (var & 1)
			_putchar('1');

		else
			_putchar('0');
	}
}
