#include <stdio.h>
#include <stdlib.h>

int main()
{
	int j, i, r, c;
	int **t;
	r = 4;
	c = 6;

	t = (int **)malloc(r * sizeof(int *));
	for (i = 0; i < r; i++)
		t[i] = (int *)malloc(c * sizeof(int));

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j ++)
			printf("%d", t[i][j]);
printf("\n");
	}
	return (0);
}
