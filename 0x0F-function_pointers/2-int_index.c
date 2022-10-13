#include "function_pointers.h"

/**
 * int_index - gets the index matched
 * @array: contains array of integers
 * @size: size of the array
 * @cmp: points to function to campaire
 *
 * Return: return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ch;

	if ((array) && (size <= 0) && cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ch = cmp(array[i]);
		if (ch)
			break;
	}
	if (i < size)
		return (i);
	return (-1);
}
