#include "search_algos.h"

/**
 * search - Searches the index
 * @array: is a pointer to the first element of the array to search in
 * @low: The minimum value in the search
 * @high: The highest value in the search
 * @value: Is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 */

int search(int *array, int low, int high, int value)
{
	int med, tmp, i;

	if ((low > high) || (array == NULL))
		return (-1);

	printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
				if (i != high)
					printf(", ");
		}
	printf("\n");

	med = (high + low) / 2;

	if (value > array[med])
		return (search(array, med + 1, high, value));

	if (value < array[med])
		return (search(array, low, med - 1, value));

	if (value == array[med])
		tmp = med;

	return (tmp);
}

/**
 * binary_search - Searches for a value in a sorted array
 * @array: is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int result;

	result = search(array, 0, size - 1, value);

	return (result);
}
