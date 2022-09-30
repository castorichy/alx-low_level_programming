#include <stdio.h>
#include <stddef.h>

/**
 * main - prints file name
 * @argc: holds the size of argv
 * @argv: An array of size argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d", argc - 1);
	return (0);
}
