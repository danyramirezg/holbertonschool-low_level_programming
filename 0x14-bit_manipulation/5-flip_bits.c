#include <stdio.h>
#include "holberton.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: Unsigned int (pointer)
* @index: The index given
* Return: 1 if works and -1 if an error ocurred.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len, count, j;

	len = 63;
	count = 0;
	j = 0;
while (len >= count9
{
	if((m & 1) != (n & 1))
	{
		j++;
	}
	n >>= 1;
	m >>= 1;
	count++;
}
	return(j);
}

