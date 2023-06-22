#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *@c:the number to be checked
 * Return:1 if uper 0 if anything
 */
int _isupper(int c)
{      
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
