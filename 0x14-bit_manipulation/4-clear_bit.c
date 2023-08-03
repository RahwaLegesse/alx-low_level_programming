#include <stdio.h>
#include "main.h"

/**
 * clear_bit - it delete the one and zero
 * @n:the decimal
 * @index:the position
 * Return: -1 or 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
