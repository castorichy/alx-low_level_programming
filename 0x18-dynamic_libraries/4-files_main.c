#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0 if equal and -1 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) != 0)
	{
		return (-1);
	}

	return (0);
}

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the character array
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer/array of characters to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _strcpy - copy string from one value to another
 * @dest: destination to copy
 * @src: source to copy from
 *
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _abs - Computes the absolute value of an integer
 *@n: number being tested
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
