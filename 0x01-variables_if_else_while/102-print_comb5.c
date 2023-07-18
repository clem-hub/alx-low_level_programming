#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of
 * the numbers 0 and 1
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar (i);
			putchar (j);
			if (i < 58)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	return (0);
}
