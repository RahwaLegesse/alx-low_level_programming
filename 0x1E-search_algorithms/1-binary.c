#include "search_algos.h"

/**
  * binary_search -it searches integers using binary search.
  * @arr:  array to search.
  * @s: size of the array.
  * @value:  value to search.
  *
  * Return: -1 if the array not found
  *         Otherwise,index  value is located.
  *
  * Description: Prints the [sub]array.
  */
int binary_search(int *arr, size_t s, int value)
{
	size_t j, down, up;

	if (arr == NULL)
		return (-1);

	for (down = 0, up = s - 1; up >= down;)
	{
		printf("Searching in array: ");
		for (j = down; j < up; j++)
			printf("%d, ", arr[j]);
		printf("%d\n", arr[j]);

		j = down + (up - down) / 2;
		if (arr[j] == value)
			return (j);
		if (arr[j] > value)
			up = j - 1;
		else
			down = j + 1;
	}

	return (-1);
}
