#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n:integer
 * @index:it show which part to change
 * Return: -1 if it fails and 1 if it pass
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
