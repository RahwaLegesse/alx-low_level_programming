#include "main.h"

/**
 *print_last_digit -  prints the last digit of a number.
 *@n:the number to module
 * Return:the last digiit.
 */
int print_last_digit(int n)
{
int m = n % 10;
if (m < 0)
{
m = m * -1;
}
_putchar(m + '0');
return (m);
}
