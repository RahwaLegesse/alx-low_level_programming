#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a numbe
 * @n:number
 * Return:number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
/**
 * _sqrt - square number
 * @n:number
 * @i:another
 * Return:number
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
