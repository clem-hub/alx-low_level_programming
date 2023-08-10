#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	return (0);

	if (argc > 1)
	{
	        for (i = 1, i < argc; i++)
	        {
		    if (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9')
		    {
			sum += argv[i];
			printf("%d\n", sum);
			return (0);
		    }
		    else
		    {
			printf("Error\n");
			return (1);
		    }
	        }
	}
}
