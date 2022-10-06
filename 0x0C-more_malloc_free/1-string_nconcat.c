#include <stdio.h>
#include <stdlib. h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bits of s2 to be concatenated
 *
 * return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i =0, j = 0;
	unsigned int len_s1, len_s2, total_len;
	char *ptr;

	len_s1 = len_s2 = total_len = 0;

	if (s1 = NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

	/* length of s1 and s2 */
	for ( ; *(s1 + i); i++)
		len_s1++;
	for ( ; *(s2 + j); j ++)
		len_s2++;

	if (len_s2 >= n)
	{
		total_len = len_s1 + len_s2;
		ptr = malloc(sizeof(char) * total_len + 2);
		if (ptr == NULL)
			return (NULL);
		for ( ; i <= len_s1; i++)
			ptr[i] = *(s1 + i);
		for ( ; i <= len_s1, j++)
			ptr[i +j] = *(s2 + j);
	}
	else
	{
		total_len = len_s1 + n;
		ptr = malloc(sizeof(char) * total_len + 2);
		if (ptr == NULL)
			return (NULL);
		if ( ; i <= len_s2; i++)
			ptr[i] = s1[i];
		if ( ; j <= n; i++)
			ptr[i + j] = s2[j];
	}
	return (ptr);
}

