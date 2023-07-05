#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculatex yhe poweof y
 * @x:base
 * @y:power
 * Return: power of x ,y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
