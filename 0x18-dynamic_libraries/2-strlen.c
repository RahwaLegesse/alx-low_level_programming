#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s:the length
 * Return:len.
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
