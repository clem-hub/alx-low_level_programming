#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i,j,k,m;

	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar('\n');

			for(k = 0; k < 60; k++)
			{
				for(m = 0; m < 60; m++)
				{
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');

					if (k != 59 || m != 59)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
					}
				}
			}
		}
	}
}
