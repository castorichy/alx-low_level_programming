#include "main.h"


/**
 *_islower - checks if its lower
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

/**
 * _putchar - write a character to c stdout
 * @c: the charcter to print
 *
 * Return: on success 1
 * On error, - -1 is returned, and error number is set apropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */

int _atoi(char *s)
{
	short boolean;
	int i, minus, result;

	i = minus = result = boolean = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}

/**
 * _isdigit - Checks for numbers 1-9
 * @c: requires an int value
 *
 * Return: Returns 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isupper - checks for uppercase character
 * @c: requires an integer
 *
 * Return: return (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
