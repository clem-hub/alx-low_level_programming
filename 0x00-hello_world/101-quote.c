#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - print quote
 *
 * Description:  prints exactly " and that piece of art is useful"
 * - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *`
 * Return: Always 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 
			strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
