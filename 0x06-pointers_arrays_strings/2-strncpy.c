#include "main.h"

/**
 * _strncpy - works exactly like the standard library function strncpy
 *
 * @dest: destination to copy
 * @src: source to copy
 * @n: integer
 *
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
