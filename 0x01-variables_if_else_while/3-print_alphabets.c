#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
        char a;
	char A;

        for (a = 'a'; a <= 'z'; a++)
        {
                putchar(a);
        }
	for (A = 'A'; A <= 'Z'; a++)
        {
                putchar(A);
        }
        putchar('\n');
        return (0);
}
