#include <stdio.h>

/**
 * main - prints file name
 * @argc: holds the size of argv
 * @argv: An array of size argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (1);
	return (0);
}
