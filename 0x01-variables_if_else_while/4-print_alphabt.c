#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowA, e, q;

	e = 'e';
	q = 'q';

	for (lowA = 'a'; lowA <= 'z'; lowA++)
	{
		if (lowA != e && lowA != q)
			putchar(lowA);
	}
	putchar('\n');

	return (0);
}

