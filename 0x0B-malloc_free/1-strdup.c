#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * _strdup - diplicates a string
 * @str: String to be diplicated
 *
 * Return: pointer string
 */

char *_strdup(char *str)
{
	 int i;
	char *strcp;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	strcp = malloc(sizeof(char) * len + 1);
	if (strcp == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	{
		strcp[i] = str[i];
	}
	return (strcp);
}
