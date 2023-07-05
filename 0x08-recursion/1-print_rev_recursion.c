#include "main.h"

/**
 * _print_rev_recursion - print in reverse
 * @s:string
 * Return: s + 1.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

