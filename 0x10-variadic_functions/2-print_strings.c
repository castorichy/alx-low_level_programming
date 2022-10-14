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

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(str, char *);
			if (s != NULL)
			{
				printf("%s", s);
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			}
			else
				printf("(nil)");

		}
		printf("\n");
	}
	va_end(str);
}
