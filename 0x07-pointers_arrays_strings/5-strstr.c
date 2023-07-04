#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack:argument
 * @needle:the second argument
 * Return:pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
		i = 0;
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
				while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}

