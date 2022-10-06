#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memmory for an arrar
 * @nmemb: arrays
 * @size: no of elements
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		exit(0);
	return (arr);
}
