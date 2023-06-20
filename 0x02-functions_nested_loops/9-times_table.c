#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * @void:tble
 * Return:time table
 */
void times_table(void)
{
int i, j, z, u, d;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
z = i * j;
if (z > 9)
{
u = z % 10;
d = (z - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}}
_putchar('\n');
}}

