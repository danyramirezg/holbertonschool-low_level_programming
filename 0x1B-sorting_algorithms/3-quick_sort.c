nclude "sort.h"

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
 * @size: size
 * Return: Nothing
 */
int partition(int *arr, int min, int last, size_t size)
{
	int pivot;
	int i = (min);
	int j;

<<<<<<< HEAD
	pivot = arr[last];
	for (j = min; j < last; j++)
=======
	if (last < 0)
		return;
	pivot = arr[last];
	for (j = min ; j < last; j++)
>>>>>>> e59f32a9f78e85442cb0b92c4ee068e3c3709dcf
	{
		if (arr[j] < pivot)
		{

			swap(&arr[i], &arr[j]);


<<<<<<< HEAD
=======

>>>>>>> e59f32a9f78e85442cb0b92c4ee068e3c3709dcf
			if (i != j)
				print_array(arr, size);

			i++;

		}
	}

	swap(&arr[i], &arr[last]);
<<<<<<< HEAD
	if (i != j)
		print_array(arr, size);

	return (i);
}

/**
 * quick_sort_array - quick_sort_array
 * @arr: arr
 * @min: min
 * @last: last
 * @size: size
 * Return: Nothing
 */
void quick_sort_array(int *arr, int min, int last, size_t size)
{

	int pivot;

	if (min < last)
	{
		pivot = partition(arr, min, last, size);
		quick_sort_array(arr, min, (pivot - 1), size);
		quick_sort_array(arr, (pivot + 1), last, size);
	}
}

=======
	if (i + 1 != j)
		print_array(arr, size);

	return (i);
	}



void quick_sort_array(int *arr, int min, int last, size_t size)
{

	int pivot;

	if (min < last)
	{
		pivot = partition(arr, min, last, size);
		quick_sort_array(arr, min, (pivot - 1), size);
		quick_sort_array(arr, (pivot + 1), last, size);
	}
}

//algorithm quicksort(A, lo, hi) is
//if lo < hi then
//p := partition(A, lo, hi)
//quicksort(A, lo, p - 1)
//quicksort(A, p + 1, hi)

>>>>>>> e59f32a9f78e85442cb0b92c4ee068e3c3709dcf
/**
 * quick_sort - quick_sort
 * @array: array
 * @size: size
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
<<<<<<< HEAD

=======
	
>>>>>>> e59f32a9f78e85442cb0b92c4ee068e3c3709dcf
	quick_sort_array(array, 0, size - 1, size);
}
