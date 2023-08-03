#include <stdio.h>
#include "main.h"

/**
 * set_bit - adress of the position
 * @n:the decimal number
 * @index:the position
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
