#include "search_algos.h"
/**
 * interpolation_search - search using interpolation
 * @array: array
 * @size: size
 * @value: value
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, small, lar;
	double f;

	if (array == NULL)
		return (-1);

	small = 0;
	lar = size - 1;

	while (size)
	{
		f = (double)(lar - small) / (array[lar] - array[small]) * (value - array[small]);
		p = (size_t)(small + f);
		printf("Value checked array[%d]", (int)p);

		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[p]);
		}

		if (array[p] == value)
			return ((int)p);

		if (array[p] < value)
			small = p + 1;
		else
			lar = p - 1;

		if (small == lar)
			break;
	}

	return (-1);
}
