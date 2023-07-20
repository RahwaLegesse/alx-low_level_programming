#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - add the values all
 * @n:number of integer
 * @...:number of argument
 * Return: if n == 0-0 Oth.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, result = 0;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(p, int);
		va_end(p);
	}
	return (result);
}
