#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: string
 *
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
