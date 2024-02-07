#include "search_algos.h"

/**
  * _binary_search - it Searches in a sorted array.
  * @arr:  array to search.
  * @l: The starting index.
  * @r: The ending index
  * @value: The value to search for.
  *
  * Return: If the value is not present
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *arr, size_t l, size_t r, int value)
{
	size_t j;

	if (arr == NULL)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");
		for (j = l; j < r; j++)
			printf("%d, ", arr[j]);
		printf("%d\n", arr[j]);

		j = l + (r - l) / 2;
		if (arr[j] == value)
			return (j);
		if (arr[j] > value)
			r = j - 1;
		else
			l = j + 1;
	}

	return (-1);
}

/**
  * exponential_search - it Searches a value in a sorted array
  * @arr: array to search.
  * @s: size
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *arr, size_t s, int value)
{
	size_t i = 0, r;

	if (arr == NULL)
		return (-1);

	if (arr[0] != value)
	{
		for (i = 1; i < s && arr[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
	}

	r = i < s ? i : s - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (_binary_search(arr, i / 2, r, value));
}
