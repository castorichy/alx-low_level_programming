#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 * @argc: holds the size of argv
 * @argv: An array of size argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d", mul);
	}
	else
		printf("Error");
	return (1);
}
