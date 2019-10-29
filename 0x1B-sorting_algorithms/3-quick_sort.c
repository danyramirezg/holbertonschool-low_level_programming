#include "sort.h"

/**
 * swap - Function that swap two variables.
 * @a: integer to swap
 * @b: integer to swap
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

/**
 * partition - Takes last element as pivot
 * @arr: Sorted array
 * @min: The first element
 * @last: The last element
 * Return: Nothing
 */
int partition(int *arr, int min, int last, size_t size) 
{
	int pivot = arr[last];
	int i = (min - 1);
	int j;

	for (j = min; j < last; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			if (i != j)
				print_array(arr, size);
		}
	}
	if (pivot < arr[i + 1])
	{
		swap(&arr[i + 1], &arr[last]);
		if (i + 1 != j)
			print_array(arr, size);
	}
	return (i + 1);

}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	
	partition(array, 0, size - 1, size);
}
