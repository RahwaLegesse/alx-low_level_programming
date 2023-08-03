#include <stdio.h>
#include "main.h"

/**
 * get_bit - gives the decimal number at index
 * @n:the decimal number
 * @index:the position to point to decimal
 * Return: des.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int des = 0;

	if (index > 63)
		return (0);
	des = (n >> index) & 1;
	return (des);
}
