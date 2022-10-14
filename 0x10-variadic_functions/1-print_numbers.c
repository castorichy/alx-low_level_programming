#include "variadic_functions.h"

/**
 * print_numbers - print all args passed
 * @separator: char used to separate to ints
 * @n: nomber of args passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list op;

	va_start(op, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(op, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(op);

}
