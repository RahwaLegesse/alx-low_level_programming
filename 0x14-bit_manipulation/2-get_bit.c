#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:integer
 * @index:index
 * Return: dec.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int dec = 0;

	if (index > 63)
		return (-1);
	dec = (n >> index) & 1;
	return (dec);
}
