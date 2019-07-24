#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: Argument for the integer
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to compare values
 * Return: The function´s pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL))
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	return (-1);
}
