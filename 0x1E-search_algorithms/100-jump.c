#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searche value in an array using jump
 *
 * @arr: given array
 * @s: size
 * @value: value
 * Return: index of the number
 */
int jump_search(int *arr, size_t s, int value)
{
	int i, j, k, bef;

	if (arr == NULL || s == 0)
		return (-1);

	j = (int)sqrt((double)s);
	k = 0;
	bef = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);

		if (arr[i] == value)
			return (i);
		k++;
		bef = i;
		i = k * j;
	} while (i < (int)s && arr[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", bef, i);

	for (; bef <= i && bef < (int)s; bef++)
	{
		printf("Value checked array[%d] = [%d]\n", bef, arr[bef]);
		if (arr[bef] == value)
			return (bef);
	}

	return (-1);
}
