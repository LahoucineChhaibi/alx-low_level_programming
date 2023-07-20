#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;
	
	if (array && size && size - 1)
		while (array <= end)
			action(*array++)
}
