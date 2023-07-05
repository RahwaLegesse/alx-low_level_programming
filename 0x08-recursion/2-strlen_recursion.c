#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate the length of the string
 * @s:string
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
