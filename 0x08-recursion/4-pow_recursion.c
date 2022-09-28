#include "main.h"

/**
 * _pow_recursion - calculates the power of a number
 * @x: main value
 * @y: value to be raised to
 *
 * Return: the results
 */

int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
