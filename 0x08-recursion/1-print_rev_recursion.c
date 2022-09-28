#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prnts a string in reverse
 * @s: A string to be reversed
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{	
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
