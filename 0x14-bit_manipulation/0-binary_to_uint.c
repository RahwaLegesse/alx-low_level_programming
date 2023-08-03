#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - changes binary to decimal
 * @b:the string containing the binary
 * Return: the decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int k;

	if (!b)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec = 2 * dec + (b[k] - '0');
	}
	return (dec);
}

