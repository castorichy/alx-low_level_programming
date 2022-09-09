/**
 * File - 4-print_alphabt.c
 *
 * Author: Duncan Kipruto
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower, omit;

	for (lower = 'a'; lower <= 'z'; lower++)
		if ((lower != 'q') && (lower != 'e'))
			putchar(lower);
	putchar('\n');

	return (0);
}
