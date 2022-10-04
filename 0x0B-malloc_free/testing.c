#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  n = 0, m = 0;
	char *s1 = NULL, *s2 = NULL;

	s1  ="dun";
	s2 =  "victor";
	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	n = n + m;
	printf("%d", n);

	return (0);
}
