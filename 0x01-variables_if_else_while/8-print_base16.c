#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char num;
	char c;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
