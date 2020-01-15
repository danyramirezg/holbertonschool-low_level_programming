#include "search_algos.h"

/**
 * linear_search - Searches a value in an array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
