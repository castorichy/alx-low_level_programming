#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("size of a char: %d bite(s)\n", a);
	printf("size of a int: %d bite(s)\n", b);
	printf("size of a long int: %d bite(s)\n", c);
	printf("size of a long long int: %d bite(s)\n", d);
	printf("size of a float: %d bite(s)\n", e);
	return (0);
}
