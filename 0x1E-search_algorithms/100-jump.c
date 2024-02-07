#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search
 * @array:given array
 * @size: size
 * @value: value
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, k, bef;

	if (array == NULL || size == 0)
		return (-1);

	j = (int)sqrt((double)size);
	k = 0;
	bef = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		bef = i;
		i = k * j;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", bef, i);

	for (; bef <= i && bef < (int)size; bef++)
	{
		printf("Value checked array[%d] = [%d]\n", bef, array[bef]);
		if (array[bef] == value)
			return (bef);
	}

	return (-1);
}
