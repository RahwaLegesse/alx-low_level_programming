#include "search_algos.h"

/**
 * interpolation_search - it searches  value in an array
 *
 * @arr: array
 * @s: size
 * @value: value
 * Return: index of the number
 */
int interpolation_search(int *arr, size_t s, int value)
{
	size_t p, small, lar;
	double f;

	if (arr == NULL)
		return (-1);

	small = 0;
	lar = s - 1;

	while (s)
	{
		f = (double)(lar - small) / (arr[lar] - arr[small]) * (value - arr[small]);
		p = (size_t)(small + f);
		printf("Value checked array[%d]", (int)p);

		if (p >= s)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", arr[p]);
		}

		if (arr[p] == value)
			return ((int)p);

		if (arr[p] < value)
			small = p + 1;
		else
			lar = p - 1;

		if (small == lar)
			break;
	}

	return (-1);
}
