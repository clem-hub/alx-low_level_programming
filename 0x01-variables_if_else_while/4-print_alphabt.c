#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Prints all the letters except q and e
 *
 * Return: Always )
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			i = i + 1;
		}
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
