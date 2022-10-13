#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates the valus of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer that points to a function we will be using
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
