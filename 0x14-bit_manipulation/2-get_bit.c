#include <stdio.h>
#include "holberton.h"

/**
* get_bit - Returns the value of a bit 
* @n: Unsigned long int
* @index: Value given
* Return: The value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
	return (-1);
	}
	n >>= index;

	if ((n & 1) == 1)
		return(1);
	else
	{
	return(0);
	}
}
