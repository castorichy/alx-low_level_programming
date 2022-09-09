
/**
 *  file: 2-print_alphabet.c
 *
 *  Author: Duncan Kiprto
 */
#include <stdio.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
