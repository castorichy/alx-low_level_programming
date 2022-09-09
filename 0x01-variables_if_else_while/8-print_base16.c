#include <stdio.h>

/**
 * main - prints numbers base 10
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;
	char numl;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (numl = 'a'; numl <= 'f'; numl++)
		putchar(numl);
	putchar('\n');

	return (0);
}
