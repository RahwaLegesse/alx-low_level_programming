#include <stdio.h>
#include "main.h"

/**
 * print_binary - changes from decimal to binary
 * @n:the decimal number
 * Return: binary.
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int binary;

	for (k = 63; k >= 0; k--)
	{
		binary = n >> k;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
