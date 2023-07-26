#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i != 0 )
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
