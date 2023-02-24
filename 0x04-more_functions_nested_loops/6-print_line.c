#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: an integer, the number of times the character _ should be printed
 *
 * Description: If n is 0 or less, the function should only print \n
 *
 * Return: void
 */
void print_line(int n)
{
	int line = 1;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line <= n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}
