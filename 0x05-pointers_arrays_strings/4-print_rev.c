#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
