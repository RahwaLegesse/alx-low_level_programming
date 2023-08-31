#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n:first number
 * @m:second number
 * Return: count (c).
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int binary;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		binary = exclusive >> i;
		if (binary & 1)
			c++;
	}
	return (c);
}
