#include "main.h"

/**
 * print_alphabet-print alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char lett;
for (lett = "a" ; lett >= "z"; lett++)
{
	_putchar(lett);
}
_putchar('\n');
}
