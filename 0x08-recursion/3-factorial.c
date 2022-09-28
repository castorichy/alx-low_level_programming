#include "main.h"

/**
 * factorial - print factorial of a given number
 * @n: number to get its factorials
 *
 * Return: return n
 * 	returns -1 if n < 0 to indicate an error
 */

int factorial(int n)
{
	int s;
	if (n < 0 )
		return (-1);
	else if (n == 0)
		return (1);
	else
		s = n * factorial(n - 1);

	return (s);
}
