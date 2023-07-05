#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate the factorial of the n
 * @n:number to be factor
 * Return: the factorial.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
