#include "main.h"
#include <stdio.h>
/**
 * is_prime_number -  input integer is a prime num
 * @n:input number
 * Return:number
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - prime
 * @n:input
 * @i:is_prime_number.c:another
 * Return:return
 */
int _prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n % i == 0) && (i > 1))
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
