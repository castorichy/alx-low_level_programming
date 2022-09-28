#include "main.h"

/**
 * _strlen_recursion - gets the leangth of a string
 * @s: string to wok on
 *
 * Return: return length of s
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);
	n = n + _strlen_recursion(s + 1);
	return (n);
}
