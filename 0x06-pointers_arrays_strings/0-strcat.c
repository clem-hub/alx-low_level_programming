#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; n != '\0'; n++)
	{
	}

	for (i = 0; i != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';

	return (dest);
}
