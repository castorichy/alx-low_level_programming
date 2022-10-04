#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * str_concat - concatenates string
 * @s1: first  string
 * @s2: second string
 *
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int n = 0, m = 0;
	char *t;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	t = malloc(sizeof(char) *(m+ n) + 1);

	if (t == NULL)
		return (NULL);
	while (i < n)
	{
		t[i] = s1[i];
		i++;
	}
	while (j < m)
	{
		t[i + j] = s2[j];
		j++;
	}

	return (t);
}
