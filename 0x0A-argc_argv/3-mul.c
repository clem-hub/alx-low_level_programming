#include <stdio.h>
#include "main.h"

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	if (argc = 3)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
