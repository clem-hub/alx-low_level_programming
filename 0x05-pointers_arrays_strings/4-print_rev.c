#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

/* using for loop */


	/*
	 * int i;
	 *
	 * for (i = _strlen(s); i >= 0; i--)
	 * {
	 *	_putchar(s[i]);
	 * }
	 * _putchar('\n')
	 *
	 */
