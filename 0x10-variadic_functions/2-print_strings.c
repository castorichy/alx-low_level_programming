#include "variadic_functions.h"

/**
 * print_strings -- prints string
 * @separator: str to separate strings
 * @n: No of args passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
	}
	va_end(str);
	printf("\n");
}
