#include <stdio.h>

/**
 * main - Main Entry.
 *
 * Return: Always 0.
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		if ((lower != 'q') && (lower != 'e'))
			putchar(lower);
	putchar('\n');

	return (0);
}
