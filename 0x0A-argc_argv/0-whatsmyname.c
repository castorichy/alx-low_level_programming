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
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}
