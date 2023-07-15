#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
