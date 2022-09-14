#include "main.h"
#include <stdio.h>
/**
 *_islower - checks if its lower
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
