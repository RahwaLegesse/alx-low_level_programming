#include "main.h"

/**
 * print_line - raws a straight line in the terminal
 * @n:to be checked
 * Return:- if c is greater than 0 else \n
 */
void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0 ; c < n ; c++)
{
_putchar(95);
}
_putchar('\n');
}
}
