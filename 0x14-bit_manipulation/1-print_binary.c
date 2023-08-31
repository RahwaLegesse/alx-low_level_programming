#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n:decimal number
 * Return: 1 if it passes or 0 if fail
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int binary;

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
