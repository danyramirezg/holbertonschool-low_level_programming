#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion -Returns the value of 2 raised to the power of y
 * @y: Parameter to be raised.
 *
 * Return: The value of x raised to the power.
*/
int _pow_recursion(int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (2 * _pow_recursion(y - 1));
}

/**
* binary_to_uint - Convers a binary number to an unsigned int¬
* @b: Pointing to string¬
* Return: The converted number¬
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, size = 0, result = 0;

if (b == NULL)
	return (0);

while (b[size] != '\0')
{
	size++;
}
for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] == '0')
	{
		result = result + 0;
		size--;
	}
	else if (b[i] == '1')
	{
		size--;
		result = result + _pow_recursion(size);
	}
	else
		return (0);
}
return (result);
}

