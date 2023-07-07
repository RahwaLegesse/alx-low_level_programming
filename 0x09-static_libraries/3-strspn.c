#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of a prefix substring
 * @s:string
 * @accept:accept the value
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int value = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				value++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (value);
		}
		s++;
	}
	return (value);
}
