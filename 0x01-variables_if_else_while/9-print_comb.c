#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Description: Numbers must be separated by comma, followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar (i);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
