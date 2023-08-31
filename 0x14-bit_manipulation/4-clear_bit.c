#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:integer
 * @index:index which show whic bit to clear
 * Return: -1 if it fail 1 if it pass
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
