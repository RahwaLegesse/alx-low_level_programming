#include "search_algos.h"
/**
  * binary_search - binary search
  * @array:array
  * @size:array size
  * @value:value
  * Return:index of the value
  */
int binary_search(int *array, size_t size, int value)
{
	size_t j, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; lt <= rt;)
	{
		printf("Searching in array: ");
		for (j = lt; j < rt; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = lt + (rt - lt) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			rt = j - 1;
		else
			lt = j + 1;
	}

	return (-1);
}
