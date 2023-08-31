#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for large 0 for small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
