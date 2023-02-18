#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints the alphabet in lowercase, followed by a new line.
 * Prints all the letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}
