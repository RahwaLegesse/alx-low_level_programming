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
        int j;
        int temp;

        while (s[i] != '\0')
        {
                i++;
        }
        for (j = i - 1; j >= i / 2; j--)
        {
                temp = s[j];
                s[j] = s[i - j - 1];
                s[i - j - 1] = temp;
        }
}
