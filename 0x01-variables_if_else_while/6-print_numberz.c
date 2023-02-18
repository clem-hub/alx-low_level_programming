#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: You are not allowed to use any variable of type char
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
