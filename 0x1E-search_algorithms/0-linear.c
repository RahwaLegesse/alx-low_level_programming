#include "search_algos.h"

/**
 * linear_search - it is function which searches the target array
 *
 * @arr: the given Array
 *
 * @s: Size for arr
 *
 * @value: the return value from search
 *
 * Return: the target array or -1
 */

int linear_search(int *arr, size_t s, int value)
{
	unsigned int i;

	for (i = 0; arr && i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);

		if (arr[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
