#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest:destination
 * @src:sorce
 * Return:dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
