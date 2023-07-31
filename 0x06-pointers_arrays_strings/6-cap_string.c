#include "main.h"

/**
 * *cap_string - capitalizes all first letters of words after a word-seperator
 * Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, \", (, ), {, and }
 *
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' ||
				s[i - 1] == '{' || s[i - 1] == '}' ||
				s[i - 1] == ',' || s[i - 1] == ';' ||
				s[i - 1] == '.' || s[i - 1] == '!' ||
				s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' ||
				s[i - 1] == '\t' || s[i - 1] == '\n'))
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}
