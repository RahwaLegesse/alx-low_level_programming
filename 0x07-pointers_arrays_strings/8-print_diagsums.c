#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matri
 * @a:the pointor
 * @size:size of matrics
 * Return:sum1 and sum2
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a = a + size;
	}
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
