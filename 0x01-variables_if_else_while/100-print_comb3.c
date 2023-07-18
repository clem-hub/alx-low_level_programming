#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digit
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
			if (i != j)
			{
				putchar (i);
				putchar (j);
				putchar (',');
				putchar (' ');
			}
		}	
	}
	putchar ('\n');
	return (0);
}
