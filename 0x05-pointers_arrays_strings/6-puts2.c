#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string, follwed by a new line
 *
 * @str: string to be printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0 && _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
