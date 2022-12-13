#include "main.h"




/**
 * _strcat - function that concatenates two strings
 * @dest: first ponter
 * @src: second pointer
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

/**
 * _strncat - function that concatenates two strings
 * @dest: first ponter
 * @src: second pointer
 * @n: bytes of the src
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

/**
 * _strncpy - function that copies a string upto n
 * @dest: Ponter to the string to be copied to
 * @src: Pointer to the string to copy
 * @n: bytes of the src to copy
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/**
 * _memset - fill memory with constant byte
 * @n: number of bytes
 * @s: memory area
 *@b: constant byte
 *
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

