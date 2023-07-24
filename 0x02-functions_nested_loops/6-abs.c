#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: i is an integer
 *
 * Return: interger
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
