#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s:input string
 * Return:void
 */
void rev_string(char *s)
{
	int i = 0;
	int k;
	int temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (k = i - 1; k >= i / 2; k--)
	{
	       temp = s[k];
	      s[k] = s[i - k - 1];
	      s[i - k - 1] = temp;
	}
}
