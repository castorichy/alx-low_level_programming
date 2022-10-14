#include "variadic_functions.h"

/**
 * sum_them_all - sums all arg passed by caller
 * @n: number of args to be passed
 *
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_list s;

		va_start(s, n);
		for (i = 0; i < n; i++)
			sum += va_arg(s, int);

		va_end(s);
	}
	else
		return (0);
	return (sum);
}
