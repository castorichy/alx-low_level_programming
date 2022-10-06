#include <stdio.h>
#include <stdlib.h>

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
	unsigned int i , j;
	unsigned int len_s1, len_s2, total_len;
	char *ptr;

	len_s1 = len_s2 = total_len = 0;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

	/* length of s1 and s2 */
	for ( ; *(s1 + i); i++)
		len_s1++;
	for ( ; *(s2 + j); j ++)
		len_s2++;

	if (n >= len_s2)
	{
		n = len_s2;
		total_len = n + len_s1;
	}
	else
		total_len = len_s1 + n;

	ptr = malloc(sizeof(*ptr) * total_len + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	return (ptr);
}
