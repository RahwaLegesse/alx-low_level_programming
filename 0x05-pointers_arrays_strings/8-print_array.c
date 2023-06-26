#include "main.h"
#include<stdio.h>
/**
 * print_array - prints array
 * @n:to be checked
 * @a:memory location
 * Return:comma and space.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n; i++)
{
	printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(", ");
	}
}
printf("\n");
}
