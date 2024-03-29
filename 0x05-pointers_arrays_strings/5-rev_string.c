#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reserves a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
