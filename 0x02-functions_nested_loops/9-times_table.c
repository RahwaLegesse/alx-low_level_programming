#include "main.h"

/**
 *times_table -  prints the 9 times table, starting with 0.
 *@void
 * Return: Always 0.
 */
void times_table(void)
{
int i, j, k, x, y;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
x = i * j;
if (x > 9)
{
k = x % 10;
y = x - k / 10;
_putchar(44);
_putchar(32);
_putchar(y + '0');
_putchar(k + '0');
}
else
{
if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(x + '0');
}
}
_putchar('\n');
}
}
