#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: it returns non
 */
void print_alphabet_x10(void)
{
	int a = 1, i;

	while (a <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		a++;
		_putchar('\n');
	}
	_putchar('\n');
}
