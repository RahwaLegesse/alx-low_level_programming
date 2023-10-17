#include "main.h"

/**
 * _puts - followed by a new line, to stdout
 * @str:to dispaly string
 * Return:str
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
