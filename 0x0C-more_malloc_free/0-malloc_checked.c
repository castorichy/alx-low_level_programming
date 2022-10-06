#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checkes memory allocated
 *@b: size of memory to be alocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
