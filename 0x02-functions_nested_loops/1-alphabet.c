#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - main
 *
 * Return: non
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
