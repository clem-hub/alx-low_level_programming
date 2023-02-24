#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * @c: ascii character
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;

	for  (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
