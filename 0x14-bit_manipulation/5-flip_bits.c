#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: the number
 * @m:second number
 * Return: one.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int new;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		new = exclusive >> k;
		if (new & 1)
			count++;
	}
		return (count);
}
