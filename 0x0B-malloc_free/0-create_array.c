#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: number of bits
 * @c: character
 *
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *chr;
	

	if (size == 0)
		return (NULL);
	chr = (char *)malloc(sizeof(char) * size);

	if (chr == NULL)
		return (NULL);
	else
	{
		while (i < size)
		{
			chr[i] = c;
				i++;
		}
	}
	return (chr);
}
