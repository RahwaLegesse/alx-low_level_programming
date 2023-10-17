#include "main.h"
#include <stdio.h>

/**
 *_abs - absolute value of an integer.
 *@n:the number to be checked
 * Return: n if positive ,value if negative
 */
int _abs(int n)
{
if (n <= 0)
{
int value;
value = -1 * n;
return (value);
}
return (n);
}
