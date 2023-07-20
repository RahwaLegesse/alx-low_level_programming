#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - if a number is equal to 98
 * @array:array
 * @size:siz
 * @cmp:piter to fun
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
