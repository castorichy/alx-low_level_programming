#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - calculates the squre root of n
 * @n: number to work on
 *
 * Return: Return the sqrt
 */

int  _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates sqrt of n
 * @n: number to be worked on
 * @i: iteration
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	else if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
