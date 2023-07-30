#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the second half of a string, followed by a new line.
 * if the number of characters is odd,
 * the function prints the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int j = _strlen(str); /* back to character before null character */
	int n;

	if (j % 2 != 0) /* is string length odd */
	{
		n = (j - 1) / 2;
	}
	else
	{
		n = j / 2;
	}

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
