#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints file name
 * @argc: holds the size of argv
 * @argv: An array of size argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	unsigned int j;
	int i, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (j = 0; j < strlen(e); j++)
			{
				if (e[j] < 48 || e[j] > 57)
				{
					printf("Error");
					return (1);
				}
			}
			sum += atoi(e);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
