#include "main.h"

/**
 * _isalpha - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if a letter, uppercase or lowercase
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
