#include "main.h"

/**
 * find_root - find square root of n, starting from the smallest possible, 0
 * @n: integer
 * @root: test root
 *
 * Return: natural square root of a number
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
