#include "main.h"
#include "2-strlen.c"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: points to buffer to be copied to
 * @src: points to string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
