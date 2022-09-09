#include <stdio.h>

/**
 * main - Prints numbers using putchar
 *
 * Return: Always return o
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
