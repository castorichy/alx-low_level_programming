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
	int coins[] = {25, 10, 5, 2, 1};
	int i,j;
	char *e;
	j = sizeof(coins) / sizeof(int);
	if (argc > 1 && argc < 3)
	{
		e = atoi(rgv[1]);
		for (i = 0; i < j; i++)
		{
			if (e % coins[i] == 0)
			{
				printf("argv[i]");
			}
			break;
		}
	}
	else
	{
		printf("Error");
		return (1);
	}


	return (1);
}
