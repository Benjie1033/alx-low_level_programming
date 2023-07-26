# include "function_pointers.h"

/**
 * array_iterator - a function that returns array
 * @size: size of the array
 * @array: pointing to an integer array
 * @action: pointer to function to be used
 * Retuen: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
