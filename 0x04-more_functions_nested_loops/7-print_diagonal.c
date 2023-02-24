#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: an integer, the number of times the character \ should be printed
 *
 * Description: If n is 0 or less, the function should only print \n
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 1;
	int spaces;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line <= n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
}
