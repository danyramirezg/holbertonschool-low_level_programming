#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Function executes a function given as a parameter
 * @array: Argument for the integer
 * @size: The size of the array
 * @action: A pointer to the function
 *
 * Return: The function´s pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	action(array[i]);

}
