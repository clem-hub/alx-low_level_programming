#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char txt[8] = "_putchar";
	int i;

	for (i = 0; i >= 7; i++)
	{
		_putchar(txt[i]);
	}
	_putchar("\n");
	return (0);
}
